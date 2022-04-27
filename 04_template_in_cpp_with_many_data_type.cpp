#include <iostream>
using namespace std;

template <typename T, typename V>

class paird{
	T x;
	V y;




  public: 
void setx(T x){
	this->x=x;
}
void sety(V y){
	this->y=y;
}

T getx(){
	return x;
	
}

V gety(){
	return y;
}


};


int main (){
	
	paird <int,double> p1;
	p1.setx(10.1234);
	p1.sety(20.1234);
	cout<<p1.getx()<<" "<< p1.gety()<<endl;
	
	
	
	return 0;
}
