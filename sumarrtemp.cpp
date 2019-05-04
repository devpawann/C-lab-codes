#include<iostream>
using namespace std;
template <class T>
T sum(T arr[]){
	T sum=0;
	
	for(int i=0;i<5;i++){
	
		sum=sum+arr[i];
	}
	return sum;
	
}

int main(){
	int x;
	cout<<"How many no to add??"<<endl;
	cin>>x;
	int arr[x];
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	cout<<"sum is"<<sum(arr);
}
