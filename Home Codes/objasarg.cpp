//WAP to pass object as argumnt to add two complex number

#include<iostream>
using namespace std;

class complexNum {
	private:
		float real,imag;
	public:
		void read() {
		cout<<"Enter real and imaginary part"<<endl;
		cin>>real>>imag;
		}
		
		void calc(complexNum cc1,complexNum cc2) {
			real=cc1.real+cc2.real;
			imag=cc1.imag+cc2.imag;
		}
		
		void show(){
			cout <<real<<" "<<"+i"<<imag;
		}
};

int main(){
	complexNum c1,c2,c3;
	c1.read();
	c2.read();
	c3.calc(c1,c2);
	cout<<"sum is"<<endl;
	c3.show();
	return 0;
}
