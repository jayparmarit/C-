#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	vector <int> arr = {1, 7, 2, 4, 1, 2, 2, 8, 0, 10, 1, 9, 2};
	vector <int>sm;
	
	for(int i=1; i<arr.size()-1; i++)
	{
		if(arr[i] < arr[i-1] && arr[i] < arr[i+1])
		{
			sm.push_back(arr[i]);
		}
	}
	
	for(int ele : sm)
	{
		cout << ele << " ";
	}
	
	return 0;
}