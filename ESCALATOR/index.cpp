#include<iostream>
using namespace std;

class Stack{

    public:
    int size;
    int capacity;
    int top;
    int *arr;


    Stack(int capacity){
        this->capacity = capacity;
        this->arr = new int [this->capacity];
        this->top = -1;
        this->size = 0;
    }

    void push(int ele)
    {
        if(this->size >  this->capacity-1)
        {
            cout <<  "stack is full----!" <<  endl;
            return;
        }
            this->top++;
            arr[this->top] = ele;
            this->size++;
      
    }

    void pop(){
        if(this->top < 0)
        {
            cout <<  "stack is empty---!" <<  endl;
            return;
        }
        this->top--;
        this->size--;
    }

    void peak(){
        cout << "|" <<  arr[this->top] << "|" <<  endl;
    }

    void empty(){

        if(this->top < 0)
        {
            cout <<  "Empty-true" <<  endl;
        }
        else{
            cout << "Empty-false" <<  endl;
        }
    }
    void full(){
        if(this->size >  capacity-1)
        {
            cout << "Full-true" <<  endl;

             cout << "Full-false" << endl;
        }
       
           

    }
    void display(){
        for(int i=size; i>=0; i--){
            cout << "|" <<  arr[i] << "|" <<  endl;
        }
        cout << "------------" <<  endl;
    }
};


int main(){

    int choice, capacity, ele;

    cout  <<  "stack size:";
    cin >>  capacity;

    Stack st(capacity);

    while(choice != 0)
    {
        cout <<  "press 1 for pushback" <<  endl;
        cout <<  "press 2 for popback" <<  endl;
        cout <<  "press 3 for top" << endl;
        cout <<  "press 4 for isEmpty" <<  endl;
        cout <<  "press 5 for isfull" << endl;
        cout <<  "press 6 for display" << endl;
        cout << "Choice:";
        cin >> choice;

        switch(choice)
        {
        case 1:
                cout << "ele: ";
                cin >> ele;
                st.push(ele);
          break;

        case 2:
           st.pop();
          break;

       
        case 3:
           st.peak();
          break;

       
        case 4:
           st.empty();
          break;

       
        case 5:
           st.full();
          break;
          
        case 6:
           st.display();
          break;
          
        default:
           cout << "invalid choice----!" ;
          break;
        }
    }
    return 0;
}