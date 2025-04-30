#include <iostream>

using namespace std;

template <typename T>

class store
{
	private:
	T size;
	T *arr;
	
	public:

	store ( T size)
	{
		this->size = size;
		arr = new T[this->size];
		
		if(arr == NULL)
		{
			cout << "memory allocation faield...!" << endl;
		}
		else
		{
			cout << " memory allocation successfull...!" << endl;
		}
	}
	
	~store()
	{
		delete[] arr;
		arr = NULL;
		if(arr == NULL)
		{
			cout << " memory deallocation successfull...!" << endl;
		}
		else 
		{
			cout << " memory deallocation faield...!" << endl;
		}
	}
	
	void addelement(T index, T ele)
	{
		arr[index] = ele;
	}
	
	void showelement()
	{
		for(T i=0; i<size; i++)
		{
			cout << arr[i] << ", ";
		}
		cout << endl;
	}
};

int main()
{
	store <int> obj1(5);
	store <int> obj2(4);
	
	obj1.addelement(5, 2);
	obj1.addelement(7, 25);
	obj1.addelement(9, 7);
	
	
	obj1.showelement();
	obj2.showelement();
	
	return 0;
}

