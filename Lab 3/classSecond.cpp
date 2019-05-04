#include<iostream>
using namespace std;

class student{
	char name[20];
	int roll;
	int marks[5];
	
public:	void read(){
		cout<<"Enter name and Roll\n";
		cin>>name>>roll;
		int i;
		cout<<"\nEnter Marks for 5 sub\n";
		for(i=0;i<5;i++){
			cin>>marks[i];
		}
	}
public:	
    int total(){
		int i;
		float sum= 0;
		for(i=0;i<5;i++){
			sum+=marks[i];
		}
		return sum;
//	cout<<"Total mark is: "<<sum<<endl;
//	cout<<"Percentage is "<<((sum/500.0)*100);
	
}	

	int show(){
	int i;
	float sum,a;
		cout<<"Name is:\t"<<name<<"\nRoll is:\t"<<roll<<endl;
		cout<<"Marks of 5 subject are\n";
		for(i=0;i<5;i++){
			cout<<marks[i]<<endl;
		}
			a=total();
			cout<<"Total mark is :"<<a;
			cout<<"Percentage is "<<((a/500.0)*100);
	}
};

int main(){
	student s1,s2;
	cout<<"Enter details of student 1\n ";
	s1.read();
	cout<<"Enter details of student 2\n ";
	s2.read();
	cout<<"\n..................................................\n";
	cout<<"Details of student 1\n";
	s1.show();
	s1.total();
	cout<<"\n...................................................\n";
	cout<<"Details of student 2\n";
	s2.show();
	s2.total();
	return 0;
}
