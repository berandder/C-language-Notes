#include <iostream>
using namespace std;
int main() {
/*  int a=65;//�������ͱ���a��������65��ŵ�a��
	cout<<a<<endl;
	a=100;
	cout<<a<<endl;
	float b=65.5;
	cout<<b<<endl;                               */
	
	char c='A';
	cout<<c<<endl;
	
/*  float x=7.5,y=10.6;//���帡���ͱ�������x��ֵ 
	cout<<"Area of a rectangle:"<<x*y<<endl;      */
	
	float pai=3.14159265,radius=7,area=radius*radius*pai;
	cout<<"Circle area:"<<area<<endl;
	
	int a,b;
	a=b=3,a+=b;
	cout<<a<<endl;
	cout<<b<<endl;
	
	float x=10.5,y=30.6,temp=0;
	cout<<x<<" "<<y<<endl;
	temp=x,x=y,y=temp;
	cout<<x<<" "<<y<<endl;
	
	int n1,n2=5;
	n2++;
	cout<<n2<<endl;
	++n2;
	cout<<n2<<endl;
	n1=n2++;//�Ƚ�n2��ֵ����n1����n2+1 
	cout<<n1<<" "<<n2<<endl;
	n1=++n2;//��n2+1���ٽ�n2��ֵ����n1
	cout<<n1<<" "<<n2<<endl;
	
	return 0;
}
/*  ���οռ�ռ��4���ֽڣ���Χ��-2^31~2^31-1
	������������1��������ֻ�ܳ�����ĸ�����֡��»���
				2����һ���ַ�����������
				3��������C++�Ĺؼ���
				4�����ִ�Сд
	floatΪ�����ȸ������������ͣ��ռ�ռ��4���ֽڣ���Χ��-3.4E38~3.4E38
	char��������Ϊ�ַ��ͣ�ռ��һ���ֽڣ���ŵ�������ASCII��ֵ-128~127��Χ�ڶ�Ӧ���ַ�
	C++����˫���ű�ע�ַ������õ����ű�ע�����ַ�
	��ֵ��1���򵥸�ֵ��=��
		  2������������ֵ��+=��-=��*=��/=��%=��
		  3������λ���㸳ֵ��&=��|=��^=��>>=��<<=��
		  ����ʮһ�֡�
	��������������1��temp=x,x=y,y=temp
				  2��x+=y,y=x-y,x-=y
	�������������Լ���1��������++/--
	                  2��++/--������                                                   */
