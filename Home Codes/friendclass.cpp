#include<iostream>
using namespace std;
class complex{
	int real,imag;
	public:
		complex(){
		}
		
		complex(int r,int i){
			real = r;
			imag = i;
		}
		
		friend class A;
};

class A{
	public:
		void show(complex r){
			cout<<r.real<<r.imag;
		}
		
		complex add(complex cc1,complex cc2){
			int rr=cc1.real+cc2.real;
			int ii=cc1.imag+cc2.imag;
			return complex(rr,ii);
		}
};

int main(){
	complex c1(5,6),c2(7,9),c3;
	A s1;
	c3=s1.add(c1,c2);
	s1.show(c3);
	return 0;
}
