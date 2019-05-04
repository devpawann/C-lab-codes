#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[30],email[20],nameFile[30];
	ofstream onfile;
//	onfile.open("Exam.txt");
//	cout<<"Enter name"<<endl;
//	cin>>name;
//	onfile<<name;
	ifstream fromfile;
	fromfile.open("Exam.txt");
	fromfile>>nameFile;
	cout<<"......................FILE...................................."<<endl;
	cout<<nameFile;	
}

