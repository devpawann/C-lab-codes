//Multiple handler

#include<iostream>
using namespace std;
#define max 2

class stack{
	int top;
	int arr[max];
	public:
		stack(){
			top=-1;
		}
		
		class full{
			public:
			int x;
			full(){
			}
			full(int p){
			x=p;
			}
		};
		class empty{};
		
		void push(int num){
			if(top==(max-1))
				throw full(num);
			arr[++top]=num;
			cout<<num<<" pushed"<<endl;
		}
		
		int pop(){
			if(top==-1)
				throw empty();
			return(arr[top--]);
		}

};
int main(){
	stack s;
	try{
		s.push(20);
		s.push(40);
	//	s.push(55);
	    cout<<"popped items are:-\n";
		cout<<s.pop()<<endl;
		cout<<s.pop();
		cout<<s.pop();
	}	
	
	catch(stack::full f){
		cout<<"Stack is full so cannot add "<<f.x<<endl;
	}
	
	catch(stack::empty){
		cout<<"Stack is empty"<<endl;
	}	
}
