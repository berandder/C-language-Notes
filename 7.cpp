#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
/*	int h=35,f=94,r=(f-2*h)/2,c=35-r;
	cout<<"����"<<c<<"ֻ��������"<<r<<"ֻ"<<endl;
	
	int a,b,c,d,e,f,tp;
	cin>>a>>b>>c>>d;
	tp=(c*60+d)-(a*60+b),e=tp/60,f=tp%60;
	cout<<"����������վ��ĩվ������"<<e<<"ʱ"<<f<<"��"<<endl;  */
	
	srand(time(0));
	int a,b,c;
	a=rand()%1000+1;
	b=rand()%1000+1;
	c=rand()%1000+1;
	cout<<a<<"+"<<b<<"-"<<c<<"="<<a+b-c<<endl;
}
/*  ʹ��rand()�������ش�[0,MAX)֮������������
	RAND_MAX��������=32767����Ҫʹ��ͷ�ļ���<cstdlib>
	
	ʹ��srand(time(NULL))/srand(time(0))���õ�ǰϵͳʱ��ֵ
	Ϊ������ӣ���Ҫ�õ�ͷ�ļ���<cstdlib>/<ctime>
	
	����һ����Χ�������ͨ�ñ�ʾ��ʽ��
	1��Ҫȡ��[a,b)�����������ʹ��rand()%(b-a)+a�� 
	2��Ҫȡ��[a,b]�����������ʹ��rand()%(b-a+1)+a 
	3��Ҫȡ��(a,b]�����������ʹ��rand()%(b-a)+a+1  */ 
