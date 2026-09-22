#include<iostream>
using namespace std;
int main(){
	int n , original, digit, sum=0;
	cout<<"enter a three digit number:"<<endl;
	cin>>n;
	original =n;
	while(n>0){
		digit=n%10;
		sum += digit*digit*digit;
		n=n/10;
		
		
	}
	if(sum==original){
		cout<<"the number is an armstrong number";
		
	}else{
		cout<<"the number is not an armstrong number";
	}
	return 0;
}
