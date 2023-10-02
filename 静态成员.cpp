/*
【id:299】【2分】AF. OOP 银行管理（静态成员）
题目描述

编写程序，实现某银行的客户贷款记录功能。

定义一个Customer类，要求输入客户的姓名，创建一个Customer对象。类声明如下：

class Customer
{
public:
    Customer(char* name,int b);
    ~Customer() ;//空间释放
    void Display() ;
private:
    static int TotalCustNum;//总客户人数
    static int TotalLoan;//总贷款金额
    int Loan;//贷款金额
    int CustID;//用户ID,从1开始递增
    char* CustName;//用户姓名
};

输入

输入测试次数t

对于每次测试，输入分别为姓名，贷款金额


输出

每行依次输出客户信息和银行信息。包括客户姓名，客户编号，银行总贷款人数，银行总贷款数目。


样例查看模式 
正常显示
查看格式
输入样例1 <-复制

3
Tom 200
John 330
Jack 9899
输出样例1

Tom 1 1 200
John 2 2 530
Jack 3 3 10429

1、静态数据成员不能用构造函数初始化，只能在类外初始化 int BOX::height=10；
2、静态数据成员可用对象、类名引用，如BOX a;  BOX::height/a.height; 
3、静态数据成员属于类，不属于对象； 
4、静态成员函数只默认访问静态数据成员，如果要访问非静态数据成员，要加上对象.(其他函数不用） ；
5、公用的成员函数也可以引用静态数据成员； 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Customer
{
public:
    Customer(char* name,int b)
    {
    	CustName=new char[10];
    	strcpy(CustName,name);//
    	Loan=b;
    	TotalCustNum++;//静态的作用，不同次数的对象其值仍保留 
    	CustID=TotalCustNum;
    	TotalLoan+=Loan;
	 } 
	 
	 
    ~Customer() //空间释放
    {
    	delete []CustName;
	}
    void Display() 
    {
    	cout<<CustName<<" "<<CustID<<" "<<TotalCustNum<<" "<<TotalLoan<<endl;//cin以字符串输入，输入首地址，不能加*； 
	}
private:
    static int TotalCustNum;//总客户人数
    static int TotalLoan;//总贷款金额
    int Loan;//贷款金额
    int CustID;//用户ID,从1开始递增
    char* CustName;//用户姓名
};
 int Customer::TotalCustNum=0;//总客户人数
int Customer::TotalLoan=0;//总贷款金额
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[10];
		cin>>a;//以字符串输入 
		int sum;
		cin>>sum;
		Customer c1(a,sum);
		c1.Display();
	}
}
