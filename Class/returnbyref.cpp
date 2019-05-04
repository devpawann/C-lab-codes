//Compare the values of two number and assign 0 to the largest one
#include<iostream>
using namespace std;
int & compare(int &a,int &b){
	if(a>b)
		return a;
	else
		return b;
}

int main(){
	int x,y;
	cout<<"Enter x and y";
	cin>>x>>y;
	compare(x,y)=0;
	cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
	
}
