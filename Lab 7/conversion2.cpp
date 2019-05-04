//b. Using destination ...................
#include<iostream>
#include<math.h>

using namespace std;


class cartesian;
class polar{
	float r,a;
	public:
		void read(){
			cout<<"Enter r and a"<<endl;
			cin>>r>>a;
		}
		float getr(){
			return r;
		}
		float geta(){
			return a;
		}
};

class  cartesian {
	float x,y;
	public: 
		cartesian(){
		}
	 void show(){
	 	cout<<x<<endl<<y;
	 }
	 cartesian(polar p){
	 	float a=p.geta();
	 	float r=p.getr();
	 	float rad=a*(3.145/180);
	 	x=r*cos(rad);
	 	y=r*sin(rad);
	 }
};
int main(){
	polar p;
	p.read();
	cartesian c;
	c=p;
	c.show();
}
