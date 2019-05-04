//Overriding function template

#include<iostream>
#include<string.h>
using namespace std;

template <class T>
T findMax(T x, T y){
	cout<<"I m in template"<<endl;
	if(x>y)
		cout<<x<<" is greater than "<<y<<endl;
	else
		cout<<y<<" is greater than "<<x<<endl;
}

void findMax(int s,int ss){
	cout<<"I m not in template"<<endl;
	if(s>ss)
		cout<<s<<" is greater than "<<ss<<endl;
	else
		cout<<ss<<" is greater than "<<s<<endl;
}

int main(){
//	cout<<"Enter two value to compare"<<endl;
//	cin>>n1,n2;
//	findMax(n1,n2);
findMax(5,10);
}
