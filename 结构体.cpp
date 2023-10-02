/*【id:52】【2分】K. 小票输入输出（结构体）
题目描述

现在人的消费习惯大多是刷卡消费，商家会通过POS机回执一个小票，包含商家名称、终端号、操作员、发卡方、有效期、卡号、交易时间、消费金额等信息，把商家信息定义为一个Struct结构，按照要求输出相应的格式小票。


输入

第一行输入消费次数（刷卡次数）

第二行以此输入小票包含的各种属性；

第三行与第二行类似，以此类推。。。


输出

根据输入信息，依次输出各次刷卡信息$


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2\n
TianHong 00001 01 CCB 21/06 6029071012345678 2016/3/13 1000.00\n
Cindy 00002 02 CCB 21/07 6029071055558888 2015/3/13 50.00
输出样例1
Name: TianHong\n
Terminal: 00001 operator: 01\n
Card Issuers: CCB Validity: 21/06\n
CardNumber: 6029********5678\n
Traded: 2016/3/13\n
Costs: $1000.00\n
\n
Name: Cindy\n
Terminal: 00002 operator: 02\n
Card Issuers: CCB Validity: 21/07\n
CardNumber: 6029********8888\n
Traded: 2015/3/13\n
Costs: $50.00
*/ 
#include<stdio.h>
struct piao
{
        char n[10],t[10],op[10],ci[10];
 		char va[10],cn[25],tr[10],co[10];

 } ;
 int main()
 {
 	int t;
 	scanf("%d",&t);
 	int k; 
 	while(t--)
 	{
 	
		piao p;
 		scanf("%s%s%s%s%s%s%s%s",p.n,p.t,p.op,p.ci,p.va,p.cn,p.tr,p.co);
 		printf("Name: %s\n",p.n);
 		printf("Terminal: %s operator: %s\n",p.t,p.op);
 		printf("Card Issuers: %s Validity: %s\n",p.ci,p.va);
 		int i,sum;
 		for(i=0;i<25;i++)
 		{
 		          if(p.cn[i]=='\0')
				   break;	
		 }
		 sum=i;
		 printf("CardNumber: ");
		 for(i=0;i<sum;i++)
		 {
		 	if((i>=0&&i<=3)||(i>=sum-4&&i<=sum-1))
		 	printf("%c",p.cn[i]);
		 	else
		 	printf("*");
		 }
		 printf("\n");
		 printf("Traded: %s\n",p.tr);
		 printf("Costs: $%s\n",p.co);
		 printf("\n");
	 }
 }
