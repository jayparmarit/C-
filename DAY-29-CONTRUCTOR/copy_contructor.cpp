#include <iostream>
#include <string.h>

using namespace std;

class student
{
	
	public:
	
	int grid;
	int marks;
	
		student(int grid, int marks)
		{
			this->grid = grid;
			this->marks = marks;
		}
		
		student(const student & std1)
		{
			this->grid = std1.grid;
			this->marks = std1.marks;
		}
		
		~student()
		{
			cout << " product destructed..!" << endl;
		}
};

class product
{
	public:
		int id;
		
		product()
		{
			cout << "product created" << endl;
		}
		
		product(int id)
		{
			this->id = id;
			cout << " product id: " << this->id << endl;
		}
		product(const product &obj)
		{
			this->id = obj.id;
		}
};



int main()
{
	
	student std1(2101, 95);
	
	student std2(std1);
	
	cout << std1.grid << endl;
	cout << std2.marks << endl;
	// cout << std1.grid << endl;
	// cout << std2.marks << endl;
	
	return 0;
}