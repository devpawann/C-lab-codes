#include<iostream>
using namespace std;
int main(){
	int size,tot=0;
	cout<<"Enter size of an array\n";
	cin>>size;
	int *ptr=new int[size];
	cout<<"Enter elements of an array\n";
	for(int i=0;i<size;i++){
		cin>>ptr[i];
		tot=tot+ptr[i];
	}
	cout<<"Total is"<<tot<<endl;
	cout<<"Elements of an array are\n";
	for(int i=0;i<size;i++){
		cout<<ptr[i]<<endl;
	}
}
