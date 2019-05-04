//WAP to show ambiguity in Multiple inheritance

#include<iostream>
using namespace std;

class base{
	public:
		void show(){
			cout<<"this is base class";
		}
};

class base1{
	public:
		void show(){
			cout<<"This is base class 1";
		}
};

class der:public base,public base1{
	public:
		void showDer(){
			cout<<"This is derived class ";
		}
};

int main(){
	der d;
	d.show();
	
}

//COmpleted
