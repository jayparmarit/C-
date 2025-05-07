#include <iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
	
	node(int ele)
	{
		this->data = ele;
		this->next = NULL;
	}
	
	
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
	   node	*newnode = new node(ele);
	   newnode->next = this->HEAD;
	   this-> HEAD = newnode; 
	   this->size++;
	   
	}
	
	
	void endnode(int ele)
	{
		node *newnode = new node(ele);
		this->size++;
		
			if(this-> HEAD = NULL)
			{
				newnode->next = this->HEAD;
				this->HEAD = newnode;
			}
			else
			{
				node *ptr = this->HEAD;
				while (ptr->next != NULL)
				{
					ptr = ptr->next;
				}
					ptr->next = newnode;
			}
	}
	
	
	void addpos(int pos, int ele)
	{
		if(pos < 0 || pos > this->size)
		{
			cout << "invalid position..!" << endl;
		}
		else
		{
			node *newnode = new node(ele);
			this->size++;
				if(this->HEAD == NULL)
				{
					newnode->next = this->HEAD;
					this->HEAD = newnode;
				}
				else 
				{
					node *ptr = this->HEAD;
					for(int i=0; i<pos-1; i++)
					{
						ptr = ptr->next;
					}
					newnode->next = ptr->next;
					ptr->next = newnode;	
				}
		}
	}
	
	
	void updatenode(int pos, int ele)
	{
		if(pos < 0 || pos > this->size)
		{
			cout << "invalid position...!" << endl;
		}
		else 
		{
			node *ptr = this->HEAD;
			for(int i=0; i<pos; i++)
			{
				ptr = ptr->next;
			}
			ptr->data = ele;
		}
	}
	
	
	void delstart()
	{
		node *ptr = this->HEAD;
		this->HEAD= ptr->next;
		ptr = NULL;
		this->size--;
	}
	
	
	void delend()
	{
		node *ptr = this->HEAD;
		
		while(ptr->next->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = NULL;
		
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
	cout << " press 4 print of list...!" << endl;
	cout << " press 5 for update node at position of list...!" << endl;
	cout << " press 6 for delete node at begining of list...!" << endl;
	cout << " press 7 for delete node at ending of list...!" << endl;
	cout << " press 8 for delete node at position of list...!" << endl;
	
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
					list.endnode(ele);
					break;
			case 3 :
					cout << "pos: ";
					cin >> pos;
					cout << "ele: ";
					cin >> ele;
					list.addpos(pos, ele);
					break;
			case 4 :
					list.printlist();
					break;
			case 5 :
					cout << "pos: ";
					cin >> pos;
					cout << "ele: ";
					cin >> ele;
					list.updatenode(pos, ele);
					break;
			case 6 :
					list.delstart();
					break;
			case 7 :
					list.delend();
					break;
			default :
					break;
						
		}
	}
	
	return 0;
}