//1.Class represent co-ordinate system in polar and another represent co-ordinate system in cartesian.
//WAP  to convert polar into cartesian co-ordinate
//a. Using source class conversion sub-routine
//VVIP program

#include<iostream>
#include<math.h>

using namespace std;

class  cartesian {
	float x,y;
	public: 
	cartesian(){
	}
	void show(){
		cout<<x<<endl<<y;
	}
	cartesian(int x,int y){
		this->x=x;
		this->y=y;
	}
};

class polar{
	float r,a;
	public:
		void read(){
			cout<<"Enter r and a"<<endl;
			cin>>r>>a;
		}
		operator cartesian(){
			float rad;
			rad=a*(3.145/180);
			int x,y;
			x=r* cos(rad);
			y=r* sin(rad);
			return cartesian(x,y);
		}
};


int main(){
	polar p;
	p.read();
	cartesian c;
	c=p;
	c.show();
}
