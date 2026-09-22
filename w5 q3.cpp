#include<iostream>
using namespace std;
int main(){
	int arr[100],n;
	cout<<"enter the number of array :";
	cin >>n;
	cout<<"enter the elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];	
	}
	cout<<"length of array="<<n;
	return 0;
}
