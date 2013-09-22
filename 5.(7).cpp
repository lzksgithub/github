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
	cout<<"求x的y次幂，请输入x，y"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"结果为："<<MI(x,y)<<endl;
	return 0; 
}