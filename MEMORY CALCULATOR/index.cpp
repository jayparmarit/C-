#include <iostream>
#include <string>
#include<vector>

using namespace std;

class student{

	public:
	int id;
	string name;
	
	student(int id, string name)
	{
		this->id = id;
		this->name =  name;
	}
};


class studentlist
{
	public:
	vector<student>list;
	
	void addstudent(int id, string name)
	{
		student st(id, name);
		list.push_back(st);
	}
	
	void display()
	{
		for(student s : list)
		{
			cout << "id: " << s.id << "name: " << s.name << endl;
		}
	}
	
	void findstudent(int id )
	{
		for(student s : list)
		{
			if(s.id == id)
			{
				cout << "student id: " << id << "name: " << s.name;
			}
		}
	}
	void removeid(int id )
	{
		cout << " enter id remove";
		cin >> id;
		
		for(student s : list)
		{
			if(s.id == id)
			{
				list.erase();
				cout << "student remove successful" << endl;
			}
		}
		cout << "student not found" << endl;
	}
};


int main(){
	int choice, id;
	string name;
	
	studentlist list;
	
		while(choice != 0)
		{
			cout <<" choice ";
			cin >> choice;
			
			switch(choice)
			{
				case 1 : cout <<"id: ";
						 cin >> id;
						 cout << "name: ";
						 cin >> name;
						 list.addstudent(id, name);
						 break;
				case 2 : 
						list.display();
						 break;
				case 3 : 
						cout << "id: ";
						cin >> id;
						list.findstudent(id);
						break;
				case 4 : 
						cout << "remove id: ";
						cin >> id;
						list.removeid(id);
						break;
				default : 
						cout << "invalid...!";
						break;
			}
		}

return 0; 
}