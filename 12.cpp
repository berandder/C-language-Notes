#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int main() {
/*  int a=7,b=2;
	cout<<(a+0.0)/b<<" "<<0.0+a/b<<" "<<(0.0+a)/b-1<<endl;  */
	
	int y=5,x=5;
	y=--x;
	cout<<x<<" "<<y<<endl;
	
	srand(time(0));
	cout<<rand()%6+1<<endl;
	
	float v0=30*1000/60,a=0.2,t=3*60,v=v0+a*t;//t:ʱ��
	cout<<v<<endl;
	
	return 0;
}
/*  friend�Ǻ���

    ʹ��rand()�������ش�[0,MAX)֮������������
	RAND_MAX��������=32767����Ҫʹ��ͷ�ļ���<cstdlib>
	
	ʹ��srand(time(NULL))/srand(time(0))���õ�ǰϵͳʱ��ֵ
	Ϊ������ӣ���Ҫ�õ�ͷ�ļ���<cstdlib>/<ctime>
	
	����һ����Χ�������ͨ�ñ�ʾ��ʽ��
	1��Ҫȡ��[a,b)�����������ʹ��rand()%(b-a)+a�� 
	2��Ҫȡ��[a,b]�����������ʹ��rand()%(b-a+1)+a 
	3��Ҫȡ��(a,b]�����������ʹ��rand()%(b-a)+a+1  */ 
