#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*	char a;
	cin>>a;
	char b=97+122-a;
	cout<<b<<endl;
	
	int a,b,c,d;
	cin>>a;
	b=a/100,c=a/10%10,d=a%10;//b��λ��cʮλ��d��λ 
	cout<<d<<c<<b<<endl;
	
	char c1,c2;
	int a;
	float b;
	cout<<"���룺"<<endl;
	cin>>c1>>c2>>a>>b;
	cout<<"�����"<<endl<<c1<<endl<<c2<<endl<<a<<endl<<b<<endl;
	
	float s,v,o_s,c;
	char name;
	cin>>name;
	cin>>s>>v>>o_s>>c;
	cout<<name<<endl<<"Time:"<<s/v<<" H"<<endl<<"Totalcost:"<<s/o_s*c<<" CNY"<<endl;  */
	
	float sheshi,huashi;
	cin>>huashi;
	cout<<huashi<<"���϶�="<<(huashi-32)/1.8<<"���϶�"<<endl;
	
	//�������������������ʽ��S=����p*(p-a)*(p-b)*(p-c);p=(a+b+c)/2
	float s,p,a,b,c;
	cout<<"��ֱ����������������ߵĳ��ȣ�"; 
	cin>>a>>b>>c;
	p=(a+b+c)/2,s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"�����ε�����ǣ�"<<s<<endl;
	
	int x;
	cout<<"������һ����λ����";
	cin>>x;
	cout<<(x*=1001)/7/11/13<<endl; 
	
	return 0;
}
/*  cin��C++��������䣬��cout���һ����C++�������������ķ�ʽ��stream���ķ�ʽʵ�ֵ�
    �������ָ���ı�����<-��>>��ȡ��<-����������<-"Hello!"<-����
    ��ʽ��cin>>��������1��>>��������2��>>��������3��>>����>>��������n��;
    ���� cin>>a>>b>>c>>d;
         ==
    	 cin>>a;
    	 cin>>b;
      	 cin>>c;
      	 cin>>d;
	1��cin���ѿո�ͻس����з���Ϊ�ָ����������������
	   �����Ҫ���ո��ַ���س����з����������κμ����ϵ��ַ���������ַ�����
	   ������getchar����
	2��cin�����Զ������������
	
	*7*11*13=*1001                                                                    */
