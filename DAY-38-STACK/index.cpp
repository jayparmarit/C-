#include <iostream>

using namespace std;

class stack
{
	public:
	int top;
	int size;
	int capacity;
	int *arr;
	
	stack(int capacity)
	{
		this->capacity = capacity;
		this->arr = new int[this->capacity];
		this-> top = -1;
		this->size = 0;
	}
	
	
	~stack()
	{
		delete[] arr; 
		arr = NULL;
		
		
		cout << "********************************" << endl;
	}
	
	void push(int ele)
	{
		if(this->size > this->capacity-1)
		{
			cout << "stack is full..!" << endl;
			return;
		}
		this->top++;
		arr[this->top] = ele;
		this->size++;
	}
	
	void pop()
	{
		if(this->top < 0)
		{
			cout << "stack is Empty..!" << endl;
			return;
		}
		this->top--;
		this->size--;
	}
	
	void peak()
	{
		cout << "|" << arr[this->top] << "|" << endl;
	}
	
	void isEmpty()
	{
		if(this->top < 0)
		{
			cout << " isEmpty: TRUE" << endl;
		}
		else
		{
			cout << " isFull: FALSE" << endl;
		}
	}
	
	
	void isFull()
	{
		if(this->size > capacity-1)
		{
			cout << " isEmpty: TRUE" << endl;
		}
		else
		{
			cout << " isFull: FALSE" << endl;
		}
	}
	
	void display()
	{
		for(int i=size-1; i>=0; i--)
		{
			cout << "| " << arr[i] << " |" << endl;
		}
		cout << "-----" << endl;
	}
	
	void size1()
	{
		cout << "size: " << this->size << endl;
	}
};

int main()
{
	int capacity, choice, ele;
	cout << "stack size: ";
	cin >> capacity;
	
	stack st(capacity);
	
	while(choice != 0 )
	{
		cout << "********************************" << endl << endl;
		cout << "press 1 for push stack" << endl;
		cout << "press 2 for pop stack" << endl;
		cout << "press 3 for peak stack" << endl;
		cout << "press 4 for isEmpty stack" << endl;
		cout << "press 5 for isFull stack" << endl;
		cout << "press 6 for display stack" << endl;
		cout << "press 7 for size stack" << endl;
		
		cout << "choice: ";
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
				st.isEmpty();
				break;
			case 5:
				st.isFull();
				break;
			case 6:
				st.display();
				break;
			case 7:
				st.size1();
				break;
				
			default :
				break;
		}
		
	}
	return 0;
}