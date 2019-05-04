// WAP to use default argument to find sum of three number

#include<iostream>
using namespace std;
int sum(int,int,int=5);
int main(){
	cout<<"Sum is\t"<< sum(5,6)<<endl;
	return 0;
	}
int sum(int a,int b, int c)	{
	return(a+b+c);
	cout << a<< endl;
	cout <<b<<endl;
}



