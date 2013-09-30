#include "stdafx.h"
#include"iostream"
using namespace std;
float Change(float f){
	float c,a,b;
	a=5.0;b=9.0;
	c=a/b*(f-32);
	return (c);
}
int main(){
	cout<<"请输入华氏温度："<<endl;
	float c;
	cin>>c;
	cout<<"转换为摄氏温度为："<<Change(c)<<endl;
	return 0;
}
