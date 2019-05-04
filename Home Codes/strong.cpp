#include<iostream>
using namespace std;
int facto(int);
int main(){
	int n,rem,sum=0,num,fact;
	cout<<"Enter a number to check"<<endl;
	cin>>n;
	num=n;
	do{
		rem=num%10;
		fact=facto(rem);
		sum=sum+fact;
		num=num/10;
	}while(num!=0);
	
	if(sum==n){
		cout<<"Strong number";
	}
	else{
		cout<<"No it is not";
	}
	
}

int facto(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
