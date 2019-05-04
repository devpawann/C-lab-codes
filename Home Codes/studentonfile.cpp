#include<iostream>
#include<fstream>
using namespace std;

class students{
	char name[25];
	int roll;
	public:
		void readData(){
			cout<<"Enter name and roll"<<endl;
			cin>>name>>roll;
		}
		void showData(){
			cout<<"Name= "<<name<<endl;
			cout<<"Roll= "<<roll<<endl;
		}
};

void writeinfile(){
	ofstream onfile("Student.dat",ios::binary|ios::app);
	students s1;
	s1.readData();
	onfile.write(reinterpret_cast<char*>(&s1),sizeof(s1));
}

void readfromfile(){
	students s2;
	ifstream fromfile("Student.dat",ios::binary);
	while(!fromfile.eof()){
		if(fromfile.read(reinterpret_cast<char*>(&s2),sizeof(s2))>0)
			s2.showData();
	}
}


int main(){
	int choice;
//	int again=1;
//	while(again!=0){
	cout<<"write(1), read(2), exit(3)"<<endl;
	cin>>choice;
	

	switch(choice){
		case 1: writeinfile();
				break;
		case 2: readfromfile();
				break;
		case 3: exit(0);
				break;
		default: cout<<"Enter correct value";
	}
//	cout<<"Again(1/0)"<<endl;
//	cin>>again;
//}
}









