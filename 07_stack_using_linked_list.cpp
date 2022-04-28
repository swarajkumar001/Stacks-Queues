#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};
class Stack {
	// Define the data members
      Node *head;
      int size;
    
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return head==NULL;
    }

    void push(int element) {
        // Implement the push() function
        if(size==0){
            Node *newnode= new Node(element);
            head=newnode;
        }
        
        else{
             Node *newnode= new Node(element);
            newnode->next=head;
            head=newnode;
        }
        size++;
        
        
    }

    int pop() {
        // Implement the pop() function
        if(head==NULL){
            return -1;
        }
        
        
        int x= head->data;
        Node *temp=head;
        head=head->next;
       
        size--;
        delete temp;
        return x;
        
        
    }

    int top() {
        if(head==NULL){
            return -1;
        }
        // Implement the top() function
        return head->data;
    }
};
int main (){
	
	 Stack s;
	
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	s.push(500);
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
		cout<<"topmost element :  "<<s.top()<<endl;
	cout<<"size : "<<s.getSize()<<endl;
	
	cout<<"topmost element :  "<<s.top()<<endl;
	
	cout<<" is empty or not :- "<<s.isEmpty()<<endl;

	
}
