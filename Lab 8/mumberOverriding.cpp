//WAP to show member function overiding in inheritance

#include<iostream>
using namespace std;

class base {
	int x;
	
public:
	base(){
		x=0;
	}
	 base(int a){
		x=a;
	}
	void show(){
		cout<<"Base class data="<<x<<endl;
	}
};

class der:public base{
	int y;
	public:
	der(){
		y=0;
	}
	
	der(int p):base(p){
		y=p;
	}
	
	void show(){
		cout<<"Derived class data="<<y<<endl;
	}
	
};

int main(){
	der s ,d(20);
	d.show();
	d.base::show();
	return 0;
}

//Completed
