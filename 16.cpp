#include <iostream>
#include <cstdio>
using namespace std;
int main() {
/*	float num1,num2;
	char op;
	cin>>num1>>num2>>op;
	switch(op) {
		case'+':
			cout<<num1<<op<<num2<<"="<<num1+num2<<endl;
			break;
		case'-':
			cout<<num1<<op<<num2<<"="<<num1-num2<<endl;
			break;
		case'*':
			cout<<num1<<op<<num2<<"="<<num1*num2<<endl;
			break;
		case'/':
			if(num2!=0)
				cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
			else
				cout<<"Divided by zero!"<<endl;
			break;
		default:
			cout<<"Invalid operator!";
	}
	
	float x,y;
	scanf("%f%f",&x,&y);
	int n=100*x/y+0.5;
	switch(n/10) {
		case 0:case 1:
			printf("���主ԣ\n");
			break;
		case 2:
			printf("��ԣ\n");
			break;
		case 3:
			printf("��Ը�ԣ\n");
			break;
		case 4:
			printf("С��\n");
			break;
		case 5:
			printf("�±�\n");
			break;
		default:
		printf("ƶ��\n");
		break; 
	}*/
	
	int d;
	cin>>d;
	switch(d) {
		case 1:
			cout<<"Monday."<<endl;
			break;
		case 2:
			cout<<"Tuesday."<<endl;
			break;
		case 3:
			cout<<"Wednesday."<<endl;
			break;
		case 4:
			cout<<"Thursday."<<endl;
			break;
		case 5:
			cout<<"Friday."<<endl;
			break;
		case 6:
			cout<<"Saturday."<<endl;
			break;
		case 7:
			cout<<"Sunday."<<endl;
			break;
	}
	
	return 0;
}
/*
switch����ʽ��
switch(���ʽ) {
	case�������ʽ1:[�����1][break;]
		����
	case�������ʽn:[�����n][break;]
	[default:�����n+1]
}
����
��1���Ϸ���switch����еı��ʽ����ȡֵֻ�������ͣ��ַ��ͣ������ͻ�ö���͡�
��2���������ʽ���ɳ�����ɵı��ʽ��ֵ����������ʽ��������ͬ��
��3����������case��ĳ������ʽֵ���������ͬ�������������塣
��4��������顱������һ�����Ҳ������һ����䡣
��5��������ʽ�е�[]��ʾ��ѡ�
switch���֧�ֶ���������ʽ����ͬһ����顣
��С����һλ��������ȡ����n=100*x/y+0.5 
*/
