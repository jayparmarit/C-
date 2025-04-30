#include <iostream>

using namespace std;

template <typename T>

T sum(T a)
{
	return a*a;
}

int main()
{
	
	cout << sum<double>(4.9) << endl;
	
	
	return 0;
}