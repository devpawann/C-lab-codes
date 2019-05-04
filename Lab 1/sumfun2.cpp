// no argument no return
#include<iostream>
void sum();
using namespace std;
int main(){
	sum();
	return 0;
}
void sum(){
	int x,y;
	cout<<"enter any two number" << endl;
	cin>>x>>y;
	cout<< "sum is"<< (x+y);
}
