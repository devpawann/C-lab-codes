#include<iostream>
using namespace std;

class human {
	private:
		int age;
	public:
		human(){
		}
		
		human(int x){
			age=x;
			cout<<"Paramterized age vaLue"<<endl;
			cout<<age<<endl;
			cout<<"....................................."<<endl;
		}
		
		human (human &a){
			cout<<"\n\nCopy constructor age vaLue"<<endl;
			age=a.age;
			cout<<age<<endl;
			cout<<".....................................";
			
		}
		
		
		
};

int main(){
	human h1(20),h2(h1);
}
