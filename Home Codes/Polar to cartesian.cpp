//Data Conversion
//Polar---> Cartesian
//car=pol

#include<iostream>
#include<math.h>
using namespace std;

class polar{
	int radius;
	float angle;
	public:
		polar(){
			radius=angle=0;
		}
		void getData(int r,int a){
			radius=r;
			angle=a;
		}
		
		int returnA(){
			return angle;
		}
		
		float returnR(){
			return radius;
		}
};

class Cartesian{
	int xco,yco;
	public:
		void getData(int x, int y){
			xco==x;yco==y;
		}
		Cartesian(){
		xco=yco=0;}
		
		Cartesian(polar p){
			xco=p.returnR()*cos(p.returnA());
			yco=p.returnR()*sin(p.returnA());
		}
		void showCart(){
			cout<<xco<<ends<<yco<<endl;
		}
};


int main(){
	polar p1;
	Cartesian c1;
	p1.getData(10,0.7853);
	c1=p1;
	c1.showCart();
}














