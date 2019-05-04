#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
	char name[30],email[30],fname[30],femail[30];
//	fstream onfile;
//	onfile.open("file1.txt",ios::out);
//	cout<<"Name"<<endl;
//	cin>>name;
//	cout<<"Enter email"<<endl;
//	cin>>email;
//	for(int i=0;i<strlen(name);i++){
//		onfile.put(name[i]);
//	}
//	onfile.put('\n');
//	
//	for(int i=0;i<strlen(email);i++){
//		onfile.put(email[i]);
//	}
//	onfile.put('\n');
	
	fstream fromfile;
	fromfile.open("file1.txt",ios::in);
	while(fromfile){//this while loop checks for the error may apper in file.
		int i=0;
		while(fname[i]!='\n')	{
			fromfile.get(fname[i++]);
		}
		cout<<"File........"<<endl;
		cout<<fname;
		
		i=0;
		while(femail[i]!='\n')	{
			fromfile.get(femail[i++]);
		}
		cout<<femail;
		
		
	}
	return 0;
	
}
