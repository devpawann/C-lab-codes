// Dynamically allocate object for 1st program

#include<iostream>
#include<string.h>
using namespace std;

class student{
	char *name;
	int roll;
	
	public:
		student(){}
		

		student(char *n,int r):roll(r)  //Dynamic Constructor
		{
			int len=strlen(n);
			name = new char[len+1];
			strcpy(name,n);
		}
		void show(){
			cout<<name<<endl;
			cout<<roll<<endl;
		}
		
		~student(){
			delete []name;
		}
	};
		
		int main(){
			char *name="Hari";
			student *s = new student(name,20);
			s->show();
			delete s;
			return 0;
		}

