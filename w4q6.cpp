#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<" enter a character:";
	cin>>ch;
	if (ch>=65&& ch<=90){
		cout<<"capital letter ";
	}
	else if(ch>=97 && ch<=122){
		cout<<"small letter";
		
	}
	else if(ch>=48 && ch<=57){
		cout<<"digits";
		
	}
	else{
		cout<<"special symbols";
	}
	return 0;
}
