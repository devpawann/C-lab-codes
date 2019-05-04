#include<iostream>
#include<string.h>
using namespace std;

class strings{
	private:
		char str[25];
	public:
		strings(){
		}
		
		strings(char s[]){
			strcpy(str,s);
		}
		
		void getstr(){
			cout<<"input string"<<endl;
			cin>>str;
		}
		void display(){
			cout<<str;
		}
		
		strings operator +(strings s){
			strings temp;
			strcpy(temp.str,str);
			strcat(temp.str,s.str);
			return temp;
		}
};

int main(){
	strings s1,s2,s3;
	s1.strings('Hello');
	s2.getstr();
	s3=s1+s2;
	s3.display();
}
