#include<iostream>
using namespace std;

// 0(n)  10
// o(log(n))  3/4
// o(nlog(n))  13

// o(n^2)  100


int binary_search(int arr[], int low, int high, int search)
{
  if(low > high)
  {
  	return -1;
  }
  
  
  		int mid = (low+high)/2;
		
		if(arr[mid] == search)
		{
			return mid;
		}
		else if (arr[mid] > search) 
		{
			return binary_search(arr, low, mid, search);
		}
		else 
		{
			return binary_search(arr, mid+1, high, search);
		}
		
		return -1;
}

 int main(){
		int size, search;
   cout << "size: ";
   cin >> size;

   int arr[size];

   for(int i=0; i<size; i++)
   {
	cout << "arr["<< i << "]: ";
	cin >> arr[i];
   }

   cout << "Search: ";
   cin >> search;


	int find = binary_search(arr, 0, size-1, search);
	cout << find << endl;


	if(find > 0)
	{
		cout << "found index " << find << endl;
	}
	else{
		cout << " not found...!";
	}


	return 0;
 }