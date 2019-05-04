#include<iostream>
using namespace std;
class integer{
	int x;
	public:
		void set(int a){
			x=a;
		}
		
		void show(){
			cout<<"x="<<x;
		}
		integer operator ++(){
			integer i;
			i.x=++x;
			return(i);
		}
		
		integer operator ++(int){
			integer i;
			i.x=x++;
			return(i);
		}
};

int main(){
	integer i1,i2,i3;
	i1.set(5);
	cout<<"Pre increment\n";
	i2=++i1;
	i2.show();
	i1.show();
	
	cout<<"\nPost increment\n";
	i2=i1++;
	i2.show();
	i1.show();
	
}
