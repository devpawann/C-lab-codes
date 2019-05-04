//2074 chaitra q no 5

#include<iostream>
using namespace std;
class times{
	int hr,min,sec;
	double TT;
	public:
		
		times(){
			hr=min=sec=0;
		}
		void setData(){
			cout<<"Enter time in hour,minute,second"<<endl;
			cin>>hr>>min>>sec;
			TT=hr*60*60+min*60+sec;
		}
		void showData(){
			cout<<"Hour->"<<hr<<endl;
			cout<<"Minute"<<min<<endl;
			cout<<"Second"<<sec<<endl;
		}
		
		times operator +(times tt){
			times temp;
			temp.hr=hr+tt.hr;
			temp.min=min+tt.min;
			temp.sec=sec+tt.sec;
			return temp;
		}
		int operator <=(times t){
			if(TT<=t.TT)
				return 1;
			else
				return 0;
		}
};

int main(){
	times t1,t2,t3;
	cout<<"Enter data for T1"<<endl;
	t1.setData();
	cout<<"Enter data for T2"<<endl;
	t2.setData();
	cout<<"Total sum of T1 and T2 is"<<endl;
	t3=t1+t2;
	t3.showData();
	
	if(t1<=t2)
		cout<<"T1 is less or equal to T2";
	else
		cout<<"T1 is greater than or equal to T2";
		
}





