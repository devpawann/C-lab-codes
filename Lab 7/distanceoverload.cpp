//2. overload binary assignment operator "+=" to add two object of class distance.

#include<iostream>
using namespace std;

class distances{
	int feet,inch;
	public:
		distance(){
			feet=inch=0;
		}
		void get(int f,int i){
			feet=f;
			inch=i;
		}
		
		void show(){
			cout<<"Feet is:"<<feet;
			cout<<"Inch is:"<<inch;
		}
		
		distances operator +=(distances dd){
//			feet+=dd.feet;
//			inch+=dd.inch;
//			return *this;
			distances temp;
			temp.feet=feet+dd.feet;
			temp.inch=inch+dd.inch;
			return temp;
			
		}
		
		~distances(){
		}
};

int main(){
	distances d1,d2,d3;
	d1.get(2,4);
	d2.get(2,6);
d3=	d1+=d2;
	d3.show();
}


//Corect
