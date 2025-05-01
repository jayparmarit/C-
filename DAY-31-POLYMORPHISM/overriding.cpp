#include<iostream>
#include<string.h>

using namespace std;

class ind{
    public:
        void wearing(){
            cout << "Dhoti and kurta" << endl;
        }
};

class mh : public ind{
    public:
        void wearing(){
            cout << "Kurta and dhoti" << endl;
        }
};

class gj : public ind{
    public:
        void wearing(){
            cout << "Dhoti and kurta with phento" << endl;
        }
};

class dl : public gj, public mh{
    public:
        void wearing(){
            cout << "Pant and shirt" << endl;
        }
};

int main(){

    dl amit;

    mh *obj;

    obj = &amit;

    obj->wearing();

    return 0;
}