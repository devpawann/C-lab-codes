#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number"<<endl;
	int num,fact=1,i;
	cin>>num;
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<<"Factorial is"<<fact<<endl;
	return 0;
}
