//#include <iostream>
//using namespace std;
//
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
	p=a;
	cout<<"array elements are:";
	for(int i=0;i<5;i++){
		cout<<*p<<" ";
		p++;
	}	
	return 0;	
}


//int main() {
//    int n, sum = 0;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    int arr[n];
//
//    cout << "Enter " << n << " elements:\n";
//    int *ptr=arr;
//    for (int i = 0; i < n; i++) {
//        cin >> *ptr;
//        ptr++;
//    }
//
//    ptr = arr;
//
//    for (int i = 0; i < n; i++) {
//        sum += *ptr;
//        ptr++;
//    }
//
//    cout << "Sum = " << sum << endl;
//
//    return 0;
//}

