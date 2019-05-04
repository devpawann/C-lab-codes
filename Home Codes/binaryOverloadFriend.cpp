//Binary oprator overloading using friend function

#include<iostream>
using namespace std;

class times{
	int hr,min,sec;
	public:
		times(){
			hr=min=sec=0;
		}
		void setData(int hrr,int minn,int secc){
			hr=hrr;
			min=minn;
			sec=secc;
		}
		void showData(){
			cout<<"Hour->"<<hr<<endl;
			cout<<"Minute->"<<min<<endl;
			cout<<"Second->"<<sec<<endl;
		}
		
		friend times operator +(times,times);
};

times operator +(times tt1,times tt2){
	times ttt1;
	ttt1.hr=tt1.hr+tt2.hr;
	ttt1.min=tt1.min+tt2.min;
	ttt1.sec=tt2.sec+tt2.sec;
	return ttt1;
	
}

int main(){
	times t1,t2,t3;
	t2.setData(2,20,20);
	t3.setData(3,40,20);
	t1=t2+t3;
	t1.showData();
}
