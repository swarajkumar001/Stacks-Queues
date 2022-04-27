#include <iostream>
#include <climits>
using namespace std;
class stackUsingArray{
	int *data;
	int nextindex;
	int capacity;
	
public:
	stackUsingArray(){
		data=new int[4];
		nextindex=0;
		capacity=4;
	}
	
	
	// return the number of elements present in the stack currently 
	int size (){
		return nextindex;
		
	}
	
	//check whether stack is empty or not
	bool IsEmpty(){
		return nextindex==0;
	}
	
	// push function [ insert an element ]
	void push(int element){
		if(nextindex==capacity){
			int *newdata=new int[2*capacity];
			for(int i=0;i<capacity;i++){
				
				newdata[i]=data[i];
				
			}
			capacity=2*capacity;
			delete [] data;
			data=newdata;
			
			
			//cout<<" stack is full : "<<endl;
			//return;
			
		}
		
		data[nextindex]=element;
		nextindex++;
		
	}
	
	// pop function [ return and delete the topmost element]
	int pop(){
		if(nextindex==0){
			cout<<" stack is empty"<<endl;
			return INT_MIN;
			
		}
		
		int x= data[nextindex-1];
		nextindex--;
		return x;
	}
	
	// access the topmost element 
	
        int top(){
		if(nextindex==0){
			cout<<" stack is empty"<<endl;
			return INT_MIN;
			
		}
		return data[nextindex-1];
	}
	
	
};






int main (){
	
	stackUsingArray s;
	
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
	cout<<"size : "<<s.size()<<endl;
	
	cout<<"topmost element :  "<<s.top()<<endl;
	
	cout<<" is empty or not :- "<<s.IsEmpty()<<endl;

	
}
