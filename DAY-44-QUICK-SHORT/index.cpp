#include <iostream>
#include <vector>
using namespace std;

void print_arr(vector<int>&a)
{
		for(int e : a)
		{
			cout << e << " ";
		}
		cout<< endl;
}

int part(vector<int>&a, int low, int high)
{
	int last = a[high];
	int i = low-1;

	for(int j=low; j<high; j++)
	{
		if(a[j] < last)
		{
			i++;
			
			swap(a[i], a[j]);
		}
	}
	swap(a[i+1], a[high]);
	
	return i+1;
}

void quick_sort(vector <int>&a, int low, int high)
{
	if(low < high)
	{
		int p = part(a, low, high);
		
			quick_sort(a, low, p-1);
			quick_sort(a, p+1, high);
	}
}

int main()
{
	
	vector<int> a = {2, 4, 1, 6, 3};
	
	int n = a.size();
	
	quick_sort(a, 0, n-1);
	
	print_arr(a);
	
	return 0;
}