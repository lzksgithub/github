#include "stdafx.h"
#include"iostream"
using namespace std;
int yue(int a,int b){
	int c;
	for(c=a;c>=1;c--){	
		if(a%c==0&&b%c==0)
		break;
	}
	return (c);
}
int bei(int a,int b){
	int c,temp;
	for(c=a*b;c>=1;c--){
		if(c%a==0&&c%b==0)
		temp=c;
	}
	return (temp);
}
int main(){
	cout<<"������������"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"���Լ��Ϊ��"<<yue(a,b)<<"��С������Ϊ��"<<bei(a,b)<<endl; 
}
