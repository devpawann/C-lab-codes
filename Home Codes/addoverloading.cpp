#include<iostream>
using namespace std;
class pawan{
	int hr,min,sec;
	public:
		pawan(){
			hr=min=sec=0;
		}
		 
		
		void setData(int hrr,int minn,int secc ){
			hr=hrr;
			min=minn;
			sec=secc;
		}
		
		void show(){
		cout<<"Hour->"<<hr<<endl;
		cout<<"Minute->"<<min<<endl;
		cout<<"Second->"<<sec<<endl;
		}
		
		pawan operator +(pawan pp){
			pawan temp;
			temp.hr=hr+pp.hr;
			temp.min=min+pp.min;
			temp.sec=sec+pp.sec;
			while (temp.sec>=60){
				temp.min=temp.min+1;
				temp.sec=temp.sec-60;
			}
			while(temp.min>=60){
				temp.hr=temp.hr+1;
				temp.min=temp.min-60;
			}
			return temp;
		}
		
};

int main(){
	pawan p1,p2,p3,p4;
	p3.setData(3,30,40);
	p4.setData(3,40,30);
	p2=p3+p4;
	p2.show();
}
