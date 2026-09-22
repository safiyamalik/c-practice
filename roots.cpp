#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a, b, c;
	float r1, r2, img1, img2;
	cout<<"enter the coefficients of quadratic equations:";
	cin>>a>>b>>c;
	if (a==0){
		cout<<"invalid input a cannot be zero:"<<endl;
		return 0;
	}
	float d;
	d=(b*b)-(4*a*c);
	if (d>0){
		r1=(-b+ sqrt(d))/(2*a);
		r2=(-b- sqrt(d))/(2*a);
		cout<<"roots of the equation are:"<<r1<<"and"<<r2;
	}
	else if (d==0){
		r1=r2=-b/(2*a);
		cout<<"roots of the equation are:"<<r1<<"and"<<r2;
	}
	else{
		r1=(-b/2*a);
		img1=sqrt(-d)/(2*a);
		r2=-b/(2*a);
		img2=sqrt(-d)/(2*a);
		cout<<"roots of the equation are:"<<r1<<"+"<<img1<<"i"<<endl;
		cout<<"roots of the equation are:"<<r2<<"-"<<img2<<"i"<<endl;
	}
	return 0;	
	
}
