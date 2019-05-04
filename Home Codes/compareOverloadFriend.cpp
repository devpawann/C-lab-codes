//Overload comparison operator to check volume of two box using friend function

#include<iostream>
using namespace std;

class box{
	int l,b,h;
	double volume;
	public:
	void setData(){
		cout<<"Enter length,breadth and height"<<endl;
		cin>>l>>b>>h;
		volume =l*b*h;
	}
	friend int operator ==(box,box);
};

int operator ==(box b1,box b2){
	if(b1.volume==b2.volume)
		return 1;
	else
		return 0;
}

int main(){
	box b1,b2,b3;
	b2.setData();
	b3.setData();
	if(b2==b3)
		cout<<"Yes the volume is same";
	else
		cout<<"No the volume is not same";
	return 0;
}
