#include <iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
};

class linklist
{
	public:
	node *HEAD;
	int size;
	
	linklist()
	{
		this->HEAD = NULL;
		this->size = 0;
	}
	
	void startnode(int ele)
	{
	   node	*newnode = new node();
	   newnode->data = ele;
	   newnode->next = this->HEAD;
	   this-> HEAD = newnode;
	   
	}
	void printlist()
	{
		node *ptr = this->HEAD;
		while(ptr !=NULL)
		{
			cout << "->" <<ptr->data;
			ptr = ptr->next;
		}
		cout << endl;
	}
};


int main()
{
	
	linklist list;
	
	cout << " press 1 beginning of list...!" << endl;
	cout << " press 2 end of list...!" << endl;
	cout << " press 3 position of list...!" << endl;
	
	int choice, ele, pos;
	
	
	while(choice!=0)
	{
		cout << " choice ";
		cin >> choice;
		
		switch(choice)
		{
			case 1 : 
					cout << "ele: ";
					cin >> ele;
					list.startnode(ele);
					break;
			case 2 : 
					cout << "ele: ";
					cin >> ele;
					break;
			case 3 :
					break;
			case 4 :
					list.printlist();
					break;
			default :
					break;
						
		}
	}
	
	return 0;
}