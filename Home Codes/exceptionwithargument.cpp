#include<iostream>
using namespace std;
class student{
	int roll;
	float marks;
	public:
		class negroll{
			public:
				int r;
				negroll(){
				};
				negroll(int p){
					r=p;
				}
		};
		class negmarks{
		};
		void get(){
			cout<<"Enter roll and marks"<<endl;
			cin>>roll>>marks;
			if(roll<0){
				throw negroll(roll);
			}
			if(marks<0){
				throw negmarks();
			}
	}
		void show(){
				cout<<"Roll is:"<<roll;
				cout<<"Marks is:"<<marks;
			}
		
};

int main(){
	student s;
	try{
		s.get();
		s.show();
	}
	
	catch(student::negroll n){
	cout<<"Roll not cannt be negative"<<n.r;
}

catch(student::negmarks){
	cout<<"Marks and roll not cannt be negative";
}

}


