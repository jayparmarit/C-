#include <iostream>
#include <string.h>

using namespace std;


class animal
{
	public :
	
		void eat(char food[])
		{
			cout << " can Eat " << food << endl;
		}
		
		void hunt()
		{
			cout << " can hunt ..!" << endl;
		}
};

class veggi : public animal
{
	public:
	
		char food[100] =" grass ";
};
class non : public animal
{
	public:
	
		char food[100] = " meat ";
};


int main()
{
	
	non cow, tiger;
	
	char food[100] = "grass";
	
	cow.eat(food);
	cow.hunt();
	
	return 0;
}