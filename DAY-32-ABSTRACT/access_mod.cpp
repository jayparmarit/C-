#include <iostream>

using namespace std;

class A 
{
	public:
	int a = 10;
	
	protected :
	int b = 20;
	
	private :
	int c = 30;
};


class B : public A 
{
		public :
			int n = this-> b;
			// int n2 = this->c;
}; 

int main()

{
	A a1;
	B b1;
	
	// public

		cout << a1.a << endl;
		cout << b1.a << endl;
	
		// protected 
		
		cout << b1.n << endl;
	
	
	
	return 0;
}