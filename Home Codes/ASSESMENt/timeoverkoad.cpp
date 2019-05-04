#include<iostream>
using namespace std;
class times{
	int hr,min,sec;
	public:
		times(){
			hr=min=sec=0;
		}
	
		void getData(){
			cout<<"Enter time in hour, minute and second format"<<endl;
			cin>>hr>>min>>sec;
		}
		void showData(){
			while(sec>=60){
				sec=sec-60;
				min=min+1;
			}
			while(min>=60){
				min=min-60;
				hr=hr+1;
			}
			
			cout<<"Total time is"<<endl;
			cout<<"Hour->"<<hr<<endl;
			cout<<"Min->"<<min<<endl;
			cout<<"Second->"<<sec<<endl;
		}
		
	times operator +(times t1){
		//Temporary obj
//		times temp;
//		temp.hr=hr+t1.hr;
//		temp.min=min+t1.min;
//		temp.sec=sec+t1.sec;
//		return temp;

//This pointer
//		hr=hr+t1.hr;
//		min=min+t1.min;
//		sec=sec+t1.sec;
//		return *this;
	float x,y,z;
	x=hr+t1.hr;
	y=min+t1.min;
	z=sec+t1.sec;
	return times(x,y,z);
	}
};

int main(){
	times t,t1,t2;
	t1.getData();
	t2.getData();
	t=t1+t2;
	t.showData();
	
}










