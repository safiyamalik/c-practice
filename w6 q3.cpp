#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	int *p;
	p=&num;
	cout<<"enter the value of number :"<<num<<endl;
	cout<<"the address of number is :"<<p<<endl;
	return 0;
}

