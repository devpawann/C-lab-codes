// using function overloading calculate area of circle ,rectangle,triangle

#include<iostream>
#include<math.h>
using namespace std;
float area(float);
float area(float,float);
float area(float,float,float);
int main(){
	float a,b,c;
	int k;
	cout<< "Press\n1 for circle \n2 for rectangle \n3 for triangle\n";
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
