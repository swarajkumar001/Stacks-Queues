#include <iostream>
using namespace std;
template <typename T>
class QueueUsingArray{
	T *data;
	int nextIndex;
	int size;
	int capacity;
	int firstIndex;
	public: 
	QueueUsingArray(int totalsize){
		data=new T[totalsize];
		nextIndex=0;
		size=0;
		capacity=totalsize;
		firstIndex=-1;
	}
	//insert
	void enqueue(T element){
		
		if(size==capacity){
			
			T *newdata=new T[2*capacity];
			int j=0;
			for(int i=firstIndex;i<capacity;i++){
				newdata[j]=data[i];
				j++;
			}
			for(int i=0;i<firstIndex;i++){
				newdata[j]=data[i];
				j++;
			}
			delete []data;
			data=newdata;
			capacity=2*capacity;
			firstIndex=0;
			nextIndex=capacity;
			
			
			
			
		//	cout<< " queue is full !!"<<endl;
		//	return;
		}
		
		data[nextIndex]=element;
		nextIndex=(nextIndex+1)%capacity;
		
		if(firstIndex==-1){
			firstIndex=0;
		}
		size++;
			
	}
	
	
	//delete
	int dequeue(){
		
		if(isEmpty()){
			cout<<" queue is empty !"<<endl;
			return 0 ;
		}
		
		T x= data[firstIndex];
		firstIndex=(firstIndex+1)%capacity;
		size--;
		return x;
		
	}
	
	
	//size of the queue
	int getsize(){
		
		return size;
	}
	
	//top of the element
	int front(){
		if(size==0){
			cout<<" queue is empty !"<<endl;
			return 0;
		}
		return data[firstIndex];
	}
	
	//check whether queue is empty or not ??
	
	bool isEmpty(){
		 return size==0;
	}
	
	
	
	
	
	
};


int main(){
	QueueUsingArray<int> q(5);

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

	cout << q.getsize() << endl;
	cout << q.isEmpty() << endl;
	
	
}
