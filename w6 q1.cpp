#include<iostream>
using namespace std;
int main(){
	int a, b, sum;
	int *p1=&a;
	int *p2=&b;
	cout<<"enter two numbers :";
	cin>>a>>b;
	sum=*p1 + *p2;
	cout<<"sum of two number is :"<<sum;
	return 0;
}

