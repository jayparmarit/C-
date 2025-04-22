#include <iostream>
#include <string.h>

using namespace std;

class animal
{
	public:
		int eat	= 5;
		int sleep = 7;
};

class dog : public animal
{
	public:
		int eat = 20;
			void method()
			{
				cout << " dog is eatting : " << animal::eat << " grma food " << endl;
			}
};


class bulldog : public dog
{
	
};

int main()
{
	dog d1;
	
	d1.method();
	
	return 0;
}