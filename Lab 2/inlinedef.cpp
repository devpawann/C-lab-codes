// In q no. 1 use inline function

#include<iostream>
using namespace std;
inline int sum(int,int,int=5);
int main(){
	int x;
    x=  sum(5,6);
	cout<<"Sum is\t"<< x<<endl;
	return 0;
	}
int sum(int a,int b, int c)	{
	return(a+b+c);
}



