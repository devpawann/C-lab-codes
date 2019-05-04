//3.Overload comparison operator to  values of two object to compare values of two objects.
#include<iostream>
using namespace std;

class times{
	int hr,min,sec;
	
	public:
		times(){
			hr=min=sec=0;
		}
		void input(){
			cout<<"enter";
			cin>>hr>>min>>sec;
		}
		bool operator >(times tt){
			if(hr>tt.hr){
				return true;
			}
			else if (hr==tt.hr && min>tt.min){
				return true;
			}
			
			else if (hr==tt.hr && min==tt.min && sec>tt.sec){
			return true;
			}
			
			else{
				return false;
			}
		}
		
};


int main(){
	times t1,t2;
	t1.input();
	t2.input();
	if(t1>t2){
		cout<<"t1 is greater";
	}

}
