#include "stdafx.h"
#include"iostream"
using namespace std;
int MI(int x,int y){
	int t;
	if(y==1)
	t=x;
	else
	t=x*MI(x,y-1);
	return t;
} 
int main(){
	cout<<"��x��y���ݣ�������x��y"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"���Ϊ��"<<MI(x,y)<<endl;
	return 0; 
}