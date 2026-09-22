//((a + b / c * d - e) *(f - g)). Read the values a, b, c, d, e, f, g
#include<iostream>
using namespace std ;
int main(){
	float a, b, c, d, e,f,g,result;
	cout<<"enter the values of a,b,c,d,e,f,g:"<<endl;
	cin>>a>>b>>c>>d>>e>>f;
	result=((a+b/c*d-e)*(f-g));
	cout<<result ;
	return 0;
	
}
