#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	int *ptr;
	ptr=&num;
	cout<<"original value :"<<*ptr<<endl;
	(*ptr)++;
	cout<<"after incrementing"<<*ptr<<endl;
	(*ptr)--;
	cout<<"after decrementing :"<<*ptr<<endl;
	return 0;
	
}
