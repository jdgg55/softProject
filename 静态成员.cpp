/*
��id:299����2�֡�AF. OOP ���й�����̬��Ա��
��Ŀ����

��д����ʵ��ĳ���еĿͻ������¼���ܡ�

����һ��Customer�࣬Ҫ������ͻ�������������һ��Customer�������������£�

class Customer
{
public:
    Customer(char* name,int b);
    ~Customer() ;//�ռ��ͷ�
    void Display() ;
private:
    static int TotalCustNum;//�ܿͻ�����
    static int TotalLoan;//�ܴ�����
    int Loan;//������
    int CustID;//�û�ID,��1��ʼ����
    char* CustName;//�û�����
};

����

������Դ���t

����ÿ�β��ԣ�����ֱ�Ϊ������������


���

ÿ����������ͻ���Ϣ��������Ϣ�������ͻ��������ͻ���ţ������ܴ��������������ܴ�����Ŀ��


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����

3
Tom 200
John 330
Jack 9899
�������1

Tom 1 1 200
John 2 2 530
Jack 3 3 10429

1����̬���ݳ�Ա�����ù��캯����ʼ����ֻ���������ʼ�� int BOX::height=10��
2����̬���ݳ�Ա���ö����������ã���BOX a;  BOX::height/a.height; 
3����̬���ݳ�Ա�����࣬�����ڶ��� 
4����̬��Ա����ֻĬ�Ϸ��ʾ�̬���ݳ�Ա�����Ҫ���ʷǾ�̬���ݳ�Ա��Ҫ���϶���.(�����������ã� ��
5�����õĳ�Ա����Ҳ�������þ�̬���ݳ�Ա�� 
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
    	TotalCustNum++;//��̬�����ã���ͬ�����Ķ�����ֵ�Ա��� 
    	CustID=TotalCustNum;
    	TotalLoan+=Loan;
	 } 
	 
	 
    ~Customer() //�ռ��ͷ�
    {
    	delete []CustName;
	}
    void Display() 
    {
    	cout<<CustName<<" "<<CustID<<" "<<TotalCustNum<<" "<<TotalLoan<<endl;//cin���ַ������룬�����׵�ַ�����ܼ�*�� 
	}
private:
    static int TotalCustNum;//�ܿͻ�����
    static int TotalLoan;//�ܴ�����
    int Loan;//������
    int CustID;//�û�ID,��1��ʼ����
    char* CustName;//�û�����
};
 int Customer::TotalCustNum=0;//�ܿͻ�����
int Customer::TotalLoan=0;//�ܴ�����
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[10];
		cin>>a;//���ַ������� 
		int sum;
		cin>>sum;
		Customer c1(a,sum);
		c1.Display();
	}
}
