#include<iostream>
using namespace std;
int checkP(int n){
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			return n;
			break;
		}
		else{
			return n+1;
		}
	}
	
}
int main(){
	int x;
	cout<<"Enter number you want to check"<<endl;
	cin>>x;
	int res= checkP(x);
	if(res=x){
		cout<<"It is not prime"<<endl;
	}
	else{
		cout<<"It is prime"<<endl;
	}
}

