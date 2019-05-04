#include<iostream>
using namespace std;
int main(){
	int x=10;
	int &y=x;
	cout<<"Before x= "<<x<<" y= "<<y<<endl;
	y++;
	cout<<"After x= "<<x<<" y= "<<y<<endl;
	return 0;
}
