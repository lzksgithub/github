#include "stdafx.h"
#include"iostream"
using namespace std;
int sum(int n){
	int t=0;
	if(n==0)
	t=1;
	else
	t=sum(n-1)+2*n+1;
	return t;
}
int main(){
	const int n=49;
	cout<<"1+3+,...,+99="<<sum(n)<<endl;
	return 0; 
}
