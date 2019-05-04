#include<iostream>
#include<fstream>
using namespace std;
int main(){
//	char name[30];
//	fstream onfile;
//	onfile.open("file2.dat",ios::binary|ios::out);
//	cout<<"Enter name"<<endl;
//	cin>>name;
//	onfile.write(reinterpret_cast<char*>(name),sizeof(name));
//	return 0;
	
	char fname[30];
	fstream fromfile;
	fromfile.open("file2.dat",ios::binary|ios::in);
	fromfile.read(reinterpret_cast<char*>(fname),sizeof(fname));
	cout<<"File...."<<endl;
	cout<<fname;
	
}
