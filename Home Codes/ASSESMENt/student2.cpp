#include<iostream>
#include<fstream>
using namespace std;
class oop{
	char name[20];
	float roll;
	public:
		void readData();
		void showData();
		void writeonFile();
		void readfromFile();
};

void oop::readData(){
		cout<<"Enter name and roll"<<endl;
		cin>>name>>roll;
}

void oop::showData(){
	cout<<"Name->"<<name<<endl;
	cout<<"Roll->"<<roll<<endl;
}

void oop::writeonFile(){
	fstream onFile;
	onFile.open("record.dat",ios::app|ios::binary);
	readData();
	onFile.write(reinterpret_cast<char*>(this),sizeof(*this));
}
void oop::readfromFile(){
	fstream fromFile;
	fromFile.open("record.dat",ios::binary|ios::in);
	while(!fromFile.eof()){
		if(fromFile.read(reinterpret_cast<char*>(this),sizeof(*this))>0)
			showData();
	}
}

int main(){
	oop o1;
	int k;
	cout<<"Enter 1 to read,2 to write and 3 to exit"<<endl;
	cin>>k;
	switch(k){
		case 1: o1.readfromFile();
				break;
		case 2: o1.writeonFile();
				break;
		case 3: cout<<"Thank you"<<endl;
				break;
		default: cout<<"Enter correctly";
				break;
	}
}


