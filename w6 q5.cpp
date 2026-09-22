#include<iostream>
using namespace std;
int main(){
	char s[100];
	char *ptr;
	cout<<"enter the string:";
	cin.getline(s,100);
	ptr=s;
	
	while(*ptr!='\0'){
		cout<<*ptr;
		ptr++;
	
	}
	return 0;

}
