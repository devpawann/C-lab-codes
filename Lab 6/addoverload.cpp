//2.Overload operator "+" to add values of two object.

#include<iostream>
using namespace std;

class oop {
	int a,b;
	
	public:
		oop(int aa, int bb){
			a=aa;
			b=bb;
		}
		
		oop(){
			a=b=0;
		}
		void show(){
			cout<<"sum is"<<endl;
			cout<<a<<endl;
			cout<<b<<endl;			
			
		}
		
		oop operator + (oop);
};

oop oop:: operator + (oop A){
	a=a + A.a;
	b=b + A.b;
	return *this;
	
}

int main(){
	oop d1,d2(1,4),d3(2,7);
	d1=d2+d3;//d1=d2(1,4) operator+ d3(2,7)
	d1.show();
	return 0;
}
