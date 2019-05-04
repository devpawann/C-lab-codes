// Create class times with data member hr,minute and second. WAP add two object and display its result(Use object as argument and return object)
#include<iostream>
using namespace std;
class times{
public:
	int hr;
	int min;
	int sec;
	
	times (){
		cout<<"Constructor";
	}
	
	times(int hr,int min,int sec){
		this->hr=hr;
		this->min=min;
		this->sec=min;
	}
	
	times add(times,times);
	
	void show(){
		cout<<hr<<endl<<min<<endl<<sec<<endl;
	}
	

};

times times::add(times t1, times t2){
	hr= t1.hr+t2.hr;
	min=t1.min+t2.min;
	sec=t1.sec+t2.sec;
	
	if(sec>=60){
		min+=1;
		sec=sec-60;
	}
	
	if(min>=60){
		hr=hr+1;
		min=min-60;
	}
	return *this;
	
}



int main(){
	times a1(1,20,5),t3;
	
	t3.add(a1);
	t3.show();
	return 0;
}
