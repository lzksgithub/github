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
	cout<<"�����¶�"<<endl;
	float c;
	cin>>c;
	cout<<"���������¶�"<<'\t'<<Change(c)<<endl;
	return 0;
}
