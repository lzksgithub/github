#include "stdafx.h"
#include"iostream"
using namespace std;
float pi(int n){
	float pai,a,b,t;
	a=1.0;b=2*n+1;
	for(t=1;t<=n;t++){
		a=a*-1;
		}
	if(b==3)
	pai=4*(1+a/b);
	else 
	pai=pi(n-1)+4*a/b;
	return (pai);
}
int main(){
	cout<<"�����뾫��"<<endl;
	int n;
	cin>>n;
	cout<<"Բ����Ϊ"<<'\t'<<pi(n)<<endl;
	return 0;
}
