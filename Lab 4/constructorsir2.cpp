// WAP a class represent mass in kg and gram and including its item name a class should have 
//constructor and destructor calculate the price of each item according to appropriate price for  mass in kg

#include<iostream>
#include<string.h>
using namespace std;
class item {
	char name[30];
	float UP,TP;
	float quant;
	
	public:
		
		item(){}
		
		item(char na[],float UPP){
			strcpy(name,na);
			UP=UPP;
		}
		
		void read(){
			cout<<"enter name and unit price"<<endl;
			cin>>name>>UP;
		}
		
		void show(){
			cout <<"Name "<<name<<endl;
			cout <<"Unit Price "<<UP<<endl;
			cout <<"Total "<<TP<<endl;
			
		}
		
		void calc(){
			
			cout<<"how much do you need?"<<endl;
			cin>>quant;
			TP=quant*UP;
			show();
		}
		
		~item(){
			cout<<"destroyed\n";
		}
};


int main(){
	item y;
	item x("apple",130);
	x.calc();
	y.read();
	y.calc();
	return 0;
}
