//Function template with user defined argument

#include<iostream>
using namespace std;

template <class T> 
T sum(T a,T b){
	return (a+b);
}
class complex{
	int x,y;
	public:
		complex(){
			x=y=0;
		}
		void setData(int xx,int yy){
			x=xx;
			y=yy;
		}
		void showData(){
			cout<<"Sum is"<<endl;
			cout<<x<<endl;
			cout<<y<<endl;
		}
		friend complex operator +(complex,complex);
};



complex operator +(complex a,complex b){
	complex temp;
	temp.x=a.x+b.x;/////
	temp.y=a.y+b.y;
	return temp;
}

int main(){
	complex c1,c2,c3;
	c1.setData(5,10);
	c2.setData(10,20);
	c3=sum(c1,c2);
	c3.showData();
}


