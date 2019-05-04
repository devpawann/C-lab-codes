#include<iostream>
using namespace std;

class volume{
	int l,b,h,v;
	public:
		void getData(){
			cout<<"Enter side of box in l b h"<<endl;
			cin>>l>>b>>h;
			v=l*b*h;
		}
		
		bool operator =(volume vv){
			if(v==vv.v)
				return true;
			else
				return false;
		}
		
};

int main(){
	volume v1,v2;
	v1.getData();
	v2.getData();
	if(v1=v2){
		cout<<"Yes"<<endl;
	}
	else {
		cout<<"No";
	}
}
