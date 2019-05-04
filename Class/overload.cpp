#include<iostream>
using namespace std;
class times{
	float hour,min;
	public:
		time(){
			hour=min=0;
		}
		time(float h,float m){
			hour=h;
			min=m;
		}
		void show(){
			cout<<"hour= "<<hour<<endl;
			cout<<"Minute= "<<min<<endl;
		}
		friend istream& operator >> (istream &x,times &t);
		friend ostream& operator >> (ostream &x,times &t);
		~times(){
		}
};

istream& operator >>(istream &x,times &t){
	x>>t.hour>>t.min;
	return x;
}
ostream& operator <<(ostream &z,times &t) {
	z<,"hour= "<<t.hour<<endl<<"min ="<<t.min<,endl;
	return z;
}

int main(){
	times t;
	cin>>t;
	t.show();
	return 0;
}
