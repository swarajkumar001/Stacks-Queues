/// Template in c++.......................




//A C++ template is a powerful feature added to C++. It allows you to define 
//the generic classes and generic functions and thus provides support for generic
// programming. Generic programming is a technique where generic types are used as
// parameters in algorithms so that they can work for a variety of data types.

//template class

#include <iostream>
using namespace std;

template <typename T>

class paird{
	T x;
	T y;




  public: 
void setx(T x){
	this->x=x;
}
void sety(T y){
	this->y=y;
}

T getx(){
	return x;
	
}

T gety(){
	return y;
}


};


int main (){
	
	paird <int> p1;
	p1.setx(10);
	p1.sety(20);
	cout<<p1.getx()<<" "<< p1.gety()<<endl;
	
	
	
	return 0;
}



