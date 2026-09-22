#include<iostream>
using namespace std;
int main(){
	int a[5];
	int *p;
	p=a;
	cout<<"enter 5 elements:";
	for(int i=0;i<5;i++){
		
		cin>>*p;
		p++;
	}
	cout<<"array elements are:";
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
		
	return 0;
	
}

