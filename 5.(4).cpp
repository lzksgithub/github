#include "stdafx.h"
#include"iostream"
using namespace std;
int main(){
	cout<<"������һ����"<<endl;
	int i,x;
	cin>>x;
	for(i=x-1;i>1;i--){
		if(x%i==0){
			cout<<x<<'\t'<<"��������"<<endl; 
		break;
		}
	}
	if(i==1)
	cout<<x<<'\t'<<"������"<<endl;
	return 0;
} 
