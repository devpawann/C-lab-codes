// create a class that represent students name,roll and age it should have constructor 
//and destructor to initialize object and destroy it.

#include<iostream>
#include<string.h>
using namespace std;
class student {
public:
	char name[10];
	int roll;
	int age;
	

	student(){
		cout<<"constructor is called\t";
		
	}

 ~student(){
		cout<<"\nobject is detroyed";
	}
};
int main(){
	student s1;
	cout <<"Enter name roll and age\n";
	cin>>s1.name>>s1.roll>>s1.age;
	student();
	return 0;
}
