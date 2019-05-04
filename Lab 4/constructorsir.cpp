#include<iostream>
#include<string.h>
using namespace std;
class student{
	char name[20];
	int age;
	int roll;
	
	public:
		student(){
			age=0;
			roll=0;
			strcpy(name,"NA");
		}
		
		student(char x[],int a, int r){
			strcpy(name,x);
			age=a;
			roll=r;
		}
		
		void show(){
		cout <<"name is\t"<<name<<endl;
			cout <<"roll is\t"<<roll<<endl;
				cout <<"age is\t"<<age<<endl;
			}
			
		~student(){
				cout <<"destroyed"<<endl;
			}
			
		void getdata(){
			cout<<"enter name,roll and age\t";
			cin>>name>>roll>>age;
		}
};


int main(){
	student A1;
	student A2("Ram",2,10);
	A1.getdata();
	A1.show();
	A2.show();
	return 0;
}
