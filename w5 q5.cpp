#include<iostream>
using namespace std;
int main(){
	int arr[100], n;
	cout<<"enter the number of elements:";
	cin>>n;
	cout<<"enter the elements of array:";
	for(int i=0; i<n;i++){
		cin>>arr[i];	
	}
	int max=arr[0];
	int secmax=arr[0];
	for(int i=1; i<n;i++){
		if(arr[i]>max){
			secmax=max;
			max=arr[i];
		}
		else if (arr[i]>secmax&& arr[i]!=max){
			secmax=arr[i];
		}
			
		
	}
	cout<<"second largest element:"<<secmax<<endl;
	cout<<"largest element:"<<max;
	return 0;
	
}
