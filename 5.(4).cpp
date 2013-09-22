#include "stdafx.h"
#include"iostream"
using namespace std;
int main(){
	cout<<"请输入一个数"<<endl;
	int i,x;
	cin>>x;
	for(i=x-1;i>1;i--){
		if(x%i==0){
			cout<<x<<'\t'<<"不是素数"<<endl; 
		break;
		}
	}
	if(i==1)
	cout<<x<<'\t'<<"是素数"<<endl;
	return 0;
} 
