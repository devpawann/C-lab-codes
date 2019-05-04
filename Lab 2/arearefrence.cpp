// WAP to calculate area of square using pass by refrence

#include<iostream>
using namespace std;
void area(int &a){
	a=a*a;
}
int main(){
	int l;
	cout<< "Enter side of square\t";
	cin>> l;
	area(l);
	cout<< "Area of square is"<<l;
	return 0;
}

