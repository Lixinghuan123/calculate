//Ԥ��ʱ����Сʱ��ʵ����ʱһСʱ 
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<time.h>
#include<cstring>
#include <sstream> 
#include <fstream> 
using namespace std;
//��Ŀ��� 

char getOp(){//���ɲ����� 
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
void output(int n){//�����ʽ 
	int i;
	ofstream outfile("D:\\����\\xuexi\\����\\����������\\out.txt", ios::app); 
	for(i=0;i<n;)
	{
		int A=rand()%100;//������� 
		int B=rand()%100;
		int C=rand()%100;
	
		char op1=getOp();
		char op2=getOp();
    if(A<100&&B<100&&C<100){
	    outfile << A<<op1<<B<<op2<<C<<"="; //��������ʽд���ļ� 
        outfile << endl;
		i++	;		
		}      
	}
	outfile.close();
}

void suanshi(){
	int n;	 
	printf("���������������Ŀ������\n");
	srand((unsigned)time(NULL));
	scanf("%d",&n);
	output(n);
} 
int main()
{
	suanshi();
	return 0;
}
