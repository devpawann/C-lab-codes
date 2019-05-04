//#include<iostream>
//using namespace std;
//class Exam{
//	private:
//		int oop,toc;
//	protected:
//		void setData(int o,int t){
//			oop=o;toc=t;
//		}
//	public:
//		void showData(){
//			cout<<oop<<ends<<toc<<endl;
//		}
//		
//		void putData(int p,int q){
//			setData(p,q);
//		}
//};
//
//class exam1: public Exam{
//	public:
//	void data(int xx,int yy){
//		setData(xx,yy);
//	}
//};
//
//int main(){
////	Exam e;
////	e.putData(50,32);
////	e.showData();
//	exam1 ee;
//	ee.data(50,32);
//	ee.showData();
//}












//
//#include<iostream>
//using namespace std;
//class base{
//	public:
//	void show(){
//		cout<<"This is a base class"<<endl;
//	}
//};
//
//class der:public base{
//	public:
//	void show(){
//		cout<<"This is a derived class"<<endl;
//		base::show();
//	}
//};
//
//int main (){
//	der d;
//	d.show();
//}



#include<iostream>
using namespace std;

class Base{
	protected:
		int x,y;
	public:
		void read(){
			cout<<"Enter values for base class";
			cin>>x>>y;
		}
		
		void show(){
			cout<<"Values of base class are";
			cout<<x<<ends<<y<<endl;
		}
		
};

class Derived:public Base{
	protected:
		int p,q;
	public:
		void read(){
			cout<<"Enter values for derived class";
			cin>>p>>q;
			Base::read();
		}
		
		void show(){
			cout<<"Values of derived class are"<<endl;
			cout<<p<<ends<<q<<endl;
			Base::show();
		}
};

int main(){
	Derived d;
	d.read();
	d.show();
//	d.Base::read();
//	d.Base::show();
}




























