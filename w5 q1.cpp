#include<iostream>
using namespace std;
int main(){
	int arr[100], n;
	cout <<"enter the number of elements:";
	cin>>n;
	cout<<"enter the elements of array:";
	for(int i=0; i<n; i++){
	cin>>arr[i];	
	}
	cout<<"array elemnts are:";
	for(int i=0; i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
