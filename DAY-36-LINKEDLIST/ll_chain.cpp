#include <iostream>

using namespace std;

class node
{
	public :
	
	int data;
	node *next;
};

int main()
{
	node *HEAD = new node();
	
	HEAD->data = 11;
	HEAD->next = NULL;
	
	node *current = new node();
	
	current->data = 22;
	current->next = NULL;
	HEAD->next = current;
	
	current = new node();
	current->data = 33;	
	current->next = NULL;	
	HEAD->next->next = current;
	
	current = new node();
	current->data = 44;
	current->next = NULL;
	HEAD->next->next->next = current;
	
	
	
	
			node *ptr = HEAD;
			
			while(ptr != NULL)
			{ 
				 cout << "D: " << ptr->data << "A: " << ptr->next << endl;
				 ptr = ptr->next;
			}
	
	
	return 0;
}