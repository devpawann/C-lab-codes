#include<iostream>
using namespace std;

class over {
	private:
		int r;
		char n[10];
		
	public:
		void show(int r){
			cout<<"roll is"<<r;
		}
		void show(int r, char n[10]){
			cout<<"roll and name is"<<r<<n;
		}
};

int main(){
	over o1,o2;
	o1.show(10,"pawan");
//	o1.show(20,"pawan");
	return 0;
}
