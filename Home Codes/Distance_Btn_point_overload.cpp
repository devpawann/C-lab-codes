#include<iostream>
#include<math.h>
using namespace std;
class dist{
	float xco,yco;
	public:
		dist(){
		}
		dist(float x,float y){
			xco=x;
			yco=y;
		}
		float operator - (dist d){
			return sqrt((d.xco-xco)*(d.xco-xco)+(d.yco-yco)*(d.yco-yco));
		}
};

int main(){
	dist d1(0,0),d2(4,3);
	float y=d1-d2;
	cout<<"Distance is"<<y;
}
