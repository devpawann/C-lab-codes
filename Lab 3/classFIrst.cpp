#include<iostream>
using namespace std;

class student {
	public:
	char name[20];
	int roll;
};

int main(){
	student s1,s2;
	cout<<"Enter name and roll for Student 1 ";
	cin >> s1.name >> s1.roll;
	cout<<"\nEnter name and roll for Student 2 ";
	cin >> s2.name >> s2.roll  ;
	cout<< "\nName of student 1 is: \t" << s1.name;
	cout<< "\nRoll of student 1 is: \t " << s1.roll;
	cout<< "\nName of student 2 is: \t " << s2.name;
	cout<< "\nRoll of student 2 is: \t" << s2.roll;
	return 0;
	
}
