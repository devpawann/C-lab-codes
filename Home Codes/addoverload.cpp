//2.Overload operator "+" to add values of two object.

#include<iostream>
using namespace std;

class oop{
	int a,b;
	
	public:
		oop(int aa, int bb){
			a=aa;
			b=bb;
		}
		
		void show(){
			cout<<"sum is"<<endl;
			cout<<a<<endl;
			cout<<a<<endl;			
			
		}
		
		oop operator + (oop);
};

oop oop::operator +(oop A){
	a=a+ A.a;
	b=b +A.b;
	return this;
}

int main(){
	oop d1,d2(1,4),d3(2,7);
	d1=d2+d3;
	return 0;
}
