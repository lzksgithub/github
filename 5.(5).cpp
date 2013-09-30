#include "stdafx.h"
#include"iostream"
using namespace std;
int fac(int y){
		int t;
		if(y==1)
		t=1;
		else
		t=y*fac(y-1);
		return(t);
}
int fen(int x,int y){
	int i,temp=x;
	for(i=1;i<=y-1;i++){
		temp=temp*(x-i);
	}
	return (temp);
}
int C(int x,int y){
	int c;
	c=fen(x,y)/fac(y);
	return (c);
}
int main(){
	cout<<"求nCm，请输入n、m："<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"nCm="<<C(x,y)<<endl;
	return 0; 
}
