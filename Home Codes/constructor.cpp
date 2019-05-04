#include <iostream>
using namespace std;
class pawan{
	int a,b;
public:
	pawan(){
		cout<<"Default constructor is created";
	}
	
	pawan(int x){
		cout<<"\nCoder passed "<< x << " to the parametrised constructor";
	}
};

int main(){
	pawan c1,c2(5);
	return 0;
}
