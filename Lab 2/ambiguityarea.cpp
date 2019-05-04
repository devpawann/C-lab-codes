// WAP to overload function area to calculate area of circle,square,rectangle & triangle. Use default argument in functon area for rectangle. Show ambiguity when function overloading & default argument both are used.
#include<iostream>
#include<math.h>
using namespace std;
float area(float);
int area(int);
float area(float=6,float=5);
float area(float,float,float);
int main(){
	float a,b,c;
	int d;
	int k;
	
	cout<< "Press\n1 for circle \n2 for rectangle \n3 for triangle\n4 for Square\n";
	cin>> k;
	switch(k){
		case 1:
	cout<< "Enter radius of circle\n"<< endl;
	cin>> a;
	cout<< "Area of circle is\t"<< area(a);
	break;
	
		case 2:
	cout<<"\nEnter side of rectangle" << endl;
	cin >> a>>b;
	cout<< "Area of rectangle is: \t"<< area(a,b);
	
	break;
		case 3:
	cout<< "Enter side of triangle"<< endl;
	cin>> a>>b>>c;
	cout<< "Are of triangle is:\t "<< area(a,b,c);
	break;
	
	case 4:
		cout<< "Enter side of square"<< endl;
	cin>> d;
	cout<< "Area of square is:\t "<< area(d);
	break;
		
	
	default:
		cout<<"Enter corret number";
}
}
float area(float p){
	return(3.14*p*p);
}

float area(float p, float q){
	return(p*q);
}

float area(float p, float q, float r){
	float s;
	s=(p+q+r)/2;
	return(sqrt(s*(s-p)*(s-q)*(s-r)));
}

int area(int p){
	return p*p;
}
