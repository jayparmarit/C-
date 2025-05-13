#include <iostream>

using namespace std;


class Queue
{
	public:
	
	int *arr;
	int capacity;
	int front;
	int rear;
	int size;
	
			Queue(int capacity)
			{
				this->capacity = capacity;
				arr = new int[this->capacity];
				this->front = -1;
				this->rear = -1;
				this->size = 0;
			}
			
			~Queue()
			{
				delete [] arr;
				arr = NULL;
			}
			
			
			void enque(int ele)
				{
					if(this->rear >= this->capacity-1)
					{
						cout << "queue is overflow...!" << endl;
					}
					else if(this->rear== -1 && this->front== -1)
					{
						this->front=0;
						this->rear=0;
						arr[this->rear] = ele;
						this->size++;
					}
					else 
					{
						this->rear++;
						arr[this->rear] = ele;
						this->size++;
					}
				}
				
				void deque()
				{
					if(this->front == -1)
					{
						cout << " queue is underflow..!"  << endl;
					}
					else if (this->front == this->rear)
					{
						this->front = -1;
						this->rear = -1;
						this->size--;
					}
					else 
					{
						this->front;
						this->size--;
					}
				}
				
				
				void front1()
				{
					if(this->front == -1)
					{
						cout << "queue is empty..!" << endl;
					}
					cout << "front: " << arr[this->front] << endl;
				}
				
				void rear1()
				{
					if(this->rear == -1)
					{
						cout << "queue is empty..!" << endl;
					}
					cout << "rear: " << arr[this->rear] << endl;
				} 
				
				void isEmpty()
				{
					if(this->rear == -1 && this->front == -1)
					{
						cout << "queue is empty...!"<< endl;
					}
					else
					{
						cout << " queue is not empty..!" << endl;
					}
				}
				
				void isFull()
				{
					if(this->rear >= this->capacity-1)
					{
						cout << "queue is full" << endl;
					}
					else 
					{
						cout << " queue is not full" << endl;
					}
				}
				
				void display()
				{
					cout << "---------------------"<< endl;
					for(int i=this->front; i<=this->rear; i++)
					{
						cout << arr[i] << " ";
					} 
					cout << endl << "----------------------" << endl;
				}
				
				void size1()
				{
					cout << "queue size: " << this->size << endl;
				}
};

int main()
{
	
	int choice, ele;
	

	Queue line(5);
	
	while(choice != 0)
	{
		cout << "-------------------------" << endl << endl;
		cout << "1 for enque...!" << endl;
		cout << "2 for deque...!" << endl;
		cout << "3 for front...!" << endl;
		cout << "4 for rear...!" << endl;
		cout << "5 for isEmpty...!" << endl;
		cout << "6 for isFull...!" << endl;
		cout << "7 for display...!" << endl;
		cout << "8 for size...!" << endl;
		
		
		
		cout << "choice: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1: 
					cout << "ele: ";
					cin >> ele;
					line.enque(ele);
					break;  
			case 2: 
					line.deque();
					break;  
			case 3: 
					line.front1();
					break;  
			case 4: 
					line.rear1();
					break;  
			case 5: 
					line.isEmpty();
					break;  
			case  6:
					line.isFull();
					break;  
			case 7:
					line.display();
					break;  
			case 8:
					line.size1();
					break;  
					
			default :
					cout << " envalid choice...!" << endl;
					break;
		}
	}
	
	
	return 0;
}