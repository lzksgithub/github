#include"iostream"
#include"string.h"
using namespace std;
struct student{
	char name[20];
	char num[13];
	char tempn[13];
	int tempm;
	int mark;
	int sort;
};
struct student stu[100];
int line(){
	cout<<"---------------------"<<endl;
} 
int look(){
	cout<<"序号\t姓名\t\t学号\t\t成绩"<<endl;
	if(stu[0].sort==0){
		cout<<"没有学生！"<<endl;line();
	}
	int i;
	for(i=0;i<100;i++){
		if(stu[i].sort==0)break;
	cout<<stu[i].sort<<'\t'<<stu[i].name<<"\t"<<stu[i].num<<"\t"<<stu[i].mark<<endl;
	
	}
}
int add(){
	if(stu[99].sort==100){
		cout<<"人数已满！"<<endl;line();
	}
	if(stu[99].sort!=100){
		cout<<"请输入姓名、学号："<<endl;line();
		int i;
		for(i=0;i<100;i++){
			if(stu[i].sort==0){
				stu[i].sort=i+1;
				cin>>stu[i].name>>stu[i].num;line();
				int l=strlen(stu[i].name);
				if(l<8){
					int j;
					for(j=0;j<8-l;j++){
						strcat(stu[i].name,"_");
					}
				}
				cout<<"添加成功！"<<endl;line();
				break;
			}
		}
	}
	
}
int del(){
	cout<<"请输入要删除的学生学号："<<endl;
	cin>>stu[0].tempn;
	int i,p=0;
	for(i=0;i<stu[i].sort;i++){
		if(strcmp(stu[0].tempn,stu[i].num)==0){
			int j;
			for(j=i;j<99;j++){
				if(j==98){
					stu[99].sort=0;
				}
				strcpy(stu[j].name,stu[j+1].name);
				strcpy(stu[j].num,stu[j+1].num);
				stu[j].mark=stu[j+1].mark;
			}
			int k,x;
				for(k=99;k>0;k--){
					if(stu[k].sort==0&&stu[k-1].sort!=0){
						x=k;
					}
				}
				p=100;
				stu[x-1].sort=0;
				cout<<"删除成功！"<<endl;line();
				break;
		}
		p=p+1;
	}
	if(i==p)cout<<"没有该学生！" <<endl;line();
}
int entering(){
	int j,k,l=0;
	for(j=0;j<stu[j].sort;j++){
		l=l+1;
		cout<<"请输入学生学号、成绩："<<endl;
		cin>>stu[1].tempn>>stu[2].tempm;
		int i,p=0;
		for(i=0;i<stu[i].sort;i++){
			if(strcmp(stu[1].tempn,stu[i].num)==0){
				stu[i].mark=stu[2].tempm;
				p=100;break;
			}
			p=p+1;
		}
		if(i==p)cout<<"没有该学生！" <<endl;line();
		cout<<"是否继续？\t1.是\t2.否"<<endl;line();
		cin>>k;line();
		if(k==2)break;
	}
	cout<<"录入完毕！"<<endl;line(); 
}
int main(){
	int a;
	do{
	cout<<"----菜单----"<<endl;
	cout<<"1.查看学生名单"<<endl;
	cout<<"2.选课（添加学生）"<<endl;
	cout<<"3.退选（删除学生）"<<endl;
	cout<<"4.录入成绩"<<endl;
	cout<<"5.退出"<<endl;
	line();
	cin>>a; line();
	switch(a){
		case 1:
		look();
		break;
		case 2:
		add();
		break;
		case 3:
		del();		
		break;
		case 4:
		entering();
		break;
		case 5:
		return 0;
		break;
		default:
		cout<<"输入信息错误"<<endl;
	}
	}while(1);
}
