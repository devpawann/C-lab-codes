#include<iostream>
#include<fstream>
using namespace std;
class student{
	char name[30];
	int roll;
	public:
		void readData(){
			cout<<"Enter name and roll"<<endl;
			cin>>name>>roll;
		}
		void showData(){
			cout<<"Name->"<<name<<endl;
			cout<<"Roll->"<<roll<<endl;
		}
};

void writeonfile(){
	student s1;
	s1.readData();
	fstream onfile;
	onfile.open("ssb.dat",ios::binary|ios::app);
	onfile.write(reinterpret_cast<char*>(&s1),sizeof(s1));
}

void readfromfile(){
	student s1;
	fstream fromfile;
	fromfile.open("ssb.dat",ios::binary|ios::in);
	cout<<"Enter record no to read"<<endl;
	int n;
	cin>>n;
	fromfile.seekg((n-1)*sizeof(s1));
//	while(!fromfile.eof()){
//		if(fromfile.read(reinterpret_cast<char*>(&s1),sizeof(s1))>0)
//			s1.showData();
//	}

	fromfile.read(reinterpret_cast<char*>(&s1),sizeof(s1));
	s1.showData();
}

int main(){
	int k,l;
	do{
	cout<<"Enter 1 to read,2 to write and 3 to exit"<<endl;
	cin>>k;
	switch(k){
		case 1: readfromfile();
				break;
		case 2: writeonfile();
				break;
		case 3: cout<<"Thank you"<<endl;
				break;
		default: cout<<"Enter correctly";
				break;
	}
	cout<<"Do you want to do again(1/0)";
	cin>>l;
}while (l!=0);
	
}





