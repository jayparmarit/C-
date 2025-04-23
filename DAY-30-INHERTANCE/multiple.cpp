#include <iostream>
#include <string.h>
using namespace std;


class engine
{
	public:
	
		char eng1[100] = "v8";
		char eng2[100] = "v12";
		char eng3[100] = "turbo";
};

class wheels
{
	public:
	
		char wheel1[100] = "alloy wheel";
		char wheel2[100] = "aluminum wheel";
		char wheel3[100] = "string wheel";
};

class vehical : public engine, public wheels 
{
	public :
	
		void spf()
		{
			cout << " vehival has " << this->eng1 << " with " << this-> wheel1 << "....!";
		}
};

int main()
{
	
	
	vehical veh1;
	
	veh1.spf();
	
	return 0;
}