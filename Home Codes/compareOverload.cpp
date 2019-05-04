//Overload comparison operator to check whether a box has equal volume or not?

#include<iostream>
using namespace std;

class box{
	int l,b,h;
	double volume;
	public:
		box(){
			l=b=h=0;
		}
		void setData(){
			cout<<"Enter length,breadth and height"<<endl;
			cin>>l>>b>>h;
			volume =l*b*h;
		}
		
		bool operator ==(box b){
			if(volume==b.volume){
				return true;
			}
			else{
				return false;
			}
		}
		
};

int main(){
	box b1,b2,b3;
	b1.setData();
	b2.setData();
	if(b1==b2)
		cout<<"Yes the volume is same";
	else
		cout<<"No the volume is not same";
}




