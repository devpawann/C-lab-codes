// WAP to concatinate two string of object of class that represent name. Use dynamic operator.
#include<iostream>
#include<string.h>
using namespace std;
class person{
	char *name;
	public: 
	person(){  }
	person(char *n){
	int l=strlen(n);
	name=new char[l+1];
	strcpy(name,n);
}
void  cat(person,person);

void show(){
	cout << name << endl;}

~person(){
	delete name;
}
};

void person::cat (person p1,person p2){
	int l=strlen(p1.name)+strlen(p2.name);
	name=new char[l+1];
	strcpy(name,p1.name);
	strcat(name,p2.name);
}

int main(){
	char *a ="Pawan";
	char *b = "Acharya";
	person p1,p2(a),p3(b);
	p2.show();
	p3.show();
	p1.cat(p2,p3);
	
	p1.show();
	return 0;
}
