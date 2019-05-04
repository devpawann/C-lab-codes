//polar to cartesian  car=pol
//Work is done on destination

#include<iostream>
#include<math.h>
using namespace std;

class polar{
	float rad,angle;
	public:
			polar(){
				rad=angle=0;
			}
			
			polar(float r,float a){
				rad=r;
				angle=a;
			}
			
			void show(){
				cout<<rad<<ends<<angle<<endl;
			}
			
			float returnAngle(){
				return angle;
			}
			float returnRad(){
				return rad;
			}

};

class cart{
	float xco,yco;
	public:
		cart(){
			
		}
		
		cart(polar p1){
			xco=p1.returnRad()*cos(p1.returnAngle());
			yco=p1.returnRad()*sin(p1.returnAngle());
		}
		
		void display(){
			cout<<xco<<ends<<yco<<endl;
		}
	
};

int main(){
	polar pol(10,0.5235);
	cart car;
	car=pol;
	cout<<"Polar is"<<endl;
	pol.show();
	cout<<"cartesian is"<<endl;
	car.display();
}





