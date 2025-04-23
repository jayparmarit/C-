#include <iostream>
#include <string.h>

using namespace std;

class a
{
	public:
	
		void atop()
		{
			cout << " this is top a" << endl;
		}
};

class b : public a
{
	public:
	
	void bside()
	{
		cout << " this is side b" << endl;
	}
};

class c : public a
{
	public:
	void cside()
	{
		cout << " this is side c" << endl;
	}
};

class d : public b, public c
{
	public:
	
	void dbottom()
	{
		cout << " this is bottom d" << endl;
	}
};

int main()
{
	
	d d1;
	
	d1.dbottom();
	d1.cside();
	d1.bside();
	
	d1.b::atop();
	
	// std[0].grid
	
	
	return 0;
}