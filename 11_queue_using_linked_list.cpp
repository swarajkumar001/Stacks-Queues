#include <iostream>
using namespace std;

class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};


class Queue {
	// Define the data members
    Node *head;
    Node *tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head=NULL;
        tail=NULL;
        size = 0;
        
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size==0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        
        Node *newnode=new Node(data);
        
        if(head==NULL){
            
            head=newnode;
            tail=newnode;
            
        }
        else{
           
            tail->next=newnode;
            tail=newnode;
        }
        size++;
        
        
        
	}

    int dequeue() {
        // Implement the dequeue() function
        if(size==0){
            return -1;
        }
        
        Node *temp=head;
        int ans = head->data;
        
        head=head->next;
            delete temp;
         size--;
        
        return ans;
      
        
        
    }

    int front() {
        if(size==0){
            return -1;
        }
        
        // Implement the front() function
        return head->data;
    }
};
int main(){
	
    Queue q;

	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);


	cout << q.front() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
	
	

	
	
	
	
}
