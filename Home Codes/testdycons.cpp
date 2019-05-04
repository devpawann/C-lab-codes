#include<iostream>
#include<string.h>
using namespace std;
class testdycons{
	char *str;
	public:
		testdycons(){
			str=new char[1];
			str[0]='\0';
			
		}
		testdycons(char *string){
			str=new char[strlen(string)+1];
			strcpy(str,string);
		}
		
		void showstring(){
			cout<<"You entered"<<str;
		}
		~testdycons(){
		delete []str;
		}
		
};

int main(){
	testdycons dc(" Nepal");
	dc.showstring();
}

