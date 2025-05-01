#include<iostream>
#include<string.h>

using namespace std;

class Travel{
    public:
        void truck(){
            cout << "Truck is traveling" << endl;
        }

        void truck(int num){
            cout << "Truck is traveling, with " << num << " passengers " << endl;
        }

        void truck(int n1, int n2){
            cout << "Truck is traveling, with " << n1 << " passengers, and " << n2 << " Goodies " << endl;
        }
};


int main(){

    Travel tr;

    tr.truck(10, 30);

    return 0;
}