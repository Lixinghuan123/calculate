//预计时间两小时，实际用时一小时 
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<time.h>
#include<cstring>
#include <sstream> 
#include <fstream> 
using namespace std;
//题目输出 

char getOp(){//生成操作符 
	char op=',';
	int e=rand()%4;
	if(e==0)
	op='+';
	if(e==1)
		op='-';
	if(e==2)
		op='*';
	if(e==3)
		op='/';
		
	return op;
} 
void output(int n){//输出算式 
	int i;
	ofstream outfile("D:\\缓存\\xuexi\\大四\\软件工程设计\\out.txt", ios::app); 
	for(i=0;i<n;)
	{
		int A=rand()%100;//随机生成 
		int B=rand()%100;
		int C=rand()%100;
	
		char op1=getOp();
		char op2=getOp();
    if(A<100&&B<100&&C<100){
	    outfile << A<<op1<<B<<op2<<C<<"="; //将生成算式写入文件 
        outfile << endl;
		i++	;		
		}      
	}
	outfile.close();
}

void suanshi(){
	int n;	 
	printf("输入你想输出的题目数量：\n");
	srand((unsigned)time(NULL));
	scanf("%d",&n);
	output(n);
} 
int main()
{
	suanshi();
	return 0;
}
