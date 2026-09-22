#include<iostream>
using namespace std;
int main(){
	char s[100];
	//char *ptr;
	cout<<"enter the string:";
	cin.getline(s,100);
	cout<< s;
	//ptr=s;
	
//	while(*ptr!='\0'){
//		cout<<*ptr;
//		ptr++;
//	
//	}

	return 0;
}


//#include<iostream>
//#include<cstring>
//using namespace std ;
//int main(){
//	int a[100], n;
//	cout<<"enter the number of elements ";
//	cin>>n;
//	int *p=a;
//	for (int i=0;i<n; i++){
//		cin>> *p;
//		p++;
//	}
//	for(int i=0; i<n;i++){
//		cout <<a[i]<<" ";
//		
//	}
//	return 0;

	
//	char s[100];
//	cout<<"enter the string to be reversed :";
//	cin.getline(s,100);
//	char *st=s;
//	char *end=s+strlen(s)-1;
//	while (st<end ){
//		char temp= *st;
//		*st=*end ;
//		*end= temp;
//		
//		st++;
//		end--;
//		
//	}
//	cout<<"reversed string="<< s<<endl;
//	return 0;
//	int num=5;
//	int *p=&num;
//	cout <<"before increment"<<endl;
//	cout<<*p<<endl;
//	(*p)++;
//	cout<<"after incrementing :" <<*p<<endl;
//	return 0;
//

	
//}

