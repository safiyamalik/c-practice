#include<iostream>
using namespace std;
int main(){
	int arr[100], n, sum=0;
	cout <<"enter the number of elements:";
	cin>>n;
	cout<<"enter the elements of array:";
	for(int i=0; i<n; i++){
	cin>>arr[i];	
	}
	for(int i=0; i<n;i++){
		sum+=arr[i];
	}
	cout<<"sum of array elements are :"<<sum;
	return 0;
}
