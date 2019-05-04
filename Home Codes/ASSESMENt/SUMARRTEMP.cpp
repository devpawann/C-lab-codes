//Sum and avg of array using function template

#include<iostream>
using namespace std;

	template <class T>
	T findsum(){
	T arr[6];
	T sum=0;
	cout<<"Enter element of array";
	for(int i=0;i<6;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}
	return sum;
}

int main(){
	
	int n;
	cout<<"Sum  is "<<findsum();
}
