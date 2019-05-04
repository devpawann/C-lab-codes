//Exception Handeling

#include<iostream>
using namespace std;

int main(){
	float x,y,z;
	cout<<"Enter any two number"<<endl;
	try{
	cin>>x>>y;
		if(y==0)
			throw 1;
		z=x/y;
		cout<<"Answer is "<<z;
	}
	catch(int e){
		cout<<"Denominator cannot be 0";
	}
}
