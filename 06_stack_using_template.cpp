#include <iostream>
#include <climits>
using namespace std;

 template <typename T>
class stackUsingArray{
	T *data;
	int nextindex;
	int capacity;
	
public:
	stackUsingArray(){
		data=new T[4];
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
			T *newdata=new T[2*capacity];
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
	T pop(){
		if(nextindex==0){
			cout<<" stack is empty"<<endl;
			return 0;
			
		}
		
		T x= data[nextindex-1];
		nextindex--;
		return x;
	}
	
	// access the topmost element 
	
        T top(){
		if(nextindex==0){
			cout<<" stack is empty"<<endl;
			return INT_MIN;
			
		}
		return data[nextindex-1];
	}
	
	
};






int main (){
	
	//stackUsingArray <int> s;
	stackUsingArray <char> s;
	
	s.push(100);
	s.push(102);
	s.push(104);
	s.push(106);
	s.push(108);
	
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
		cout<<"topmost element :  "<<s.top()<<endl;
	cout<<"size : "<<s.size()<<endl;
	
	cout<<"topmost element :  "<<s.top()<<endl;
	
	cout<<" is empty or not :- "<<s.IsEmpty()<<endl;

	
}
