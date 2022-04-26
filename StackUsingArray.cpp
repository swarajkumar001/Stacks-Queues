#include <iostream>
#include <climits>
using namespace std;
class stackUsingArray{
	int *data;
	int nextindex;
	int capacity;
	
public:
	stackUsingArray(int totalsize){
		data=new int[totalsize];
		nextindex=0;
		capacity=totalsize;
	}
	
	
	// return the numbetr of elements present in the stack currently 
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
			cout<<" stack is full : "<<endl;
			
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
	
	stackUsingArray s(4);
	
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	s.push(500);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	
	cout<<"size : "<<s.size()<<endl;
	
	cout<<"topmost element :  "<<s.top()<<endl;
	
	cout<<" is empty or not :- "<<s.IsEmpty()<<endl;

	
}
