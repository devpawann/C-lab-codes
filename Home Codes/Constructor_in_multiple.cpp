#include<iostream>
using namespace std;
class A{
		public:
	A(int q){
	
		cout<<"Constructor of base A "<<q<<endl;
	}
	
	~A(){
		cout<<"Destructor of base A "<<endl;
	}
};

class B:public A{
	public:
		B(int p):A(p){
		cout<<"Constructor of der B "<<p<<endl;
		}
		
		~B(){
			cout<<"Destructor of base B "<<endl;
		}
};

class C:public B {
	public:
		C(int x):B(x){
		cout<<"Constructor of der C "<<x<<endl;
	}
	~C(){
		cout<<"Destructor of base C "<<endl;
	}
};

int main(){
	C c(5);
}
