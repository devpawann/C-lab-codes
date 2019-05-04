// operator overlaod to find sum

#include<iostream>
using namespace std;
float sum(float,float);
int sum(int,int);
int main(){
	float x,y;
	cout<<"enter any two number" << endl;
	cin>>x>>y;
	cout<< "sum is: " << sum(x,y);
	return 0;
}

int sum(int a, int b){
	return(a+b);
}

float sum(float a, float b){
	return(a+b);
}
