// Create class times with data member hr,min,sec. WAP to add data of two object.
//1. The function that is used to add two member shoud be a non member of class times.

#include<iostream>
using namespace std;

class times{
	int hr,min,sec;
	
	public:
//		times(){
//			hr=min=sec=0;
//		}
		
		times(int hrr,int minn,int secc){
			hr=hrr;min=minn;sec=secc;
		}
		
		friend times add(times,times);
		
		void show(){
			cout<<"Hour"<<hr<<endl;
			cout<<"Min"<<min<<endl;
			cout<<"Sec"<<sec<<endl;
		}
};

times add(times t,times u){
	int hr,min,sec;
	hr=t.hr+u.hr;
	min=t.min+u.min;
	sec=t.sec+u.sec;
	return times(hr,min,sec);
	
}

int main(){
	times t1(2,5,5),t2(2,4,4);
	times t=add(t1,t2);
	t.show();

}

