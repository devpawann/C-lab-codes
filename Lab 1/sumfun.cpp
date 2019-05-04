#include<iostream>
using namespace std;
int sum(int,int);
int main(){
	int x,y;
	cout<<"enter any two number" << endl;
	cin>>x>>y;
	cout<< "sum is: " << sum(x,y);
	return 0;
}
int sum(int a,int b){
	return(a+b);
}
