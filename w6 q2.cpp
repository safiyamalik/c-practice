#include<iostream>
using namespace std;
int main(){
	int a, b, temp;
	int *p1=&a;
	int *p2=&b;
	cout<<"enter two numbers :";
	cin>>a>>b;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	cout<<"after swapping:"<<endl;
	cout<<"first number="<<a<<endl;
	cout<<"second number="<<b<<endl;
	return 0;
}
	
