#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"enter two numbers:"<<endl;
	cin>>a>>b;
	while (b!=0){
		c=a&b;
		a=a^b;
		b=c<<1;
			
	}
	cout<<"sum="<<a;
	return 0;	
}
