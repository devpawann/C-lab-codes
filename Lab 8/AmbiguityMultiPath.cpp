#include<iostream>
using namespace std;

class base1{
	public:
		void show(){
			cout<<"This is base class1"<<endl;
		}
};

class der1:public base1{
	public:
		void show(){
			cout<<"This is derived class 1"<<endl;
		}
};

class der2:public base1{
	public:
		void show(){
			cout<<"This is derived class 2"<<endl;
		}
};

class der3:public der1, public der2{
	public:
		void showDer(){
				cout<<"This is derived class 3"<<endl;	
		}
};

int main(){
	der3 d;
	d.show();
}
