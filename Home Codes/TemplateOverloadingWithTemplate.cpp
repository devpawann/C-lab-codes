//Overloading template with other template

#include<iostream>
using namespace std;

template <class T>
void show(T x,T y){
	cout<<"\nTemplate first is used"<<endl;
	cout<<x<<y;
}

template <class u, class v>
void show(u x,v y){
	cout<<"\nTemplate second is used"<<endl;
	cout<<x<<y;
}

int main(){
	show(10,20);
	show("Hello world","Pawan");
	show("Hello World",500);
}
