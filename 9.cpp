#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
/*	int a;
	srand(time(0));
	a=rand()%6+1;
	cout<<a<<endl;
	
	double a,b,c,n,s;
	cin>>a>>b>>c>>n;
	s=pow(a,n)+pow(b,n)+pow(c,n);
	cout<<fixed<<setprecision(15)<<"s="<<s<<endl;
	
	//�Ȳ�������͹�ʽ��Sn=n(a1+an)/2
	double a,b,n;
	cin>>a>>b>>n;
	cout<<n*(a+b)/2<<endl;                         */
	
	double a,n,m;
	cin>>n>>m>>a;
	cout<<"���������"<<(n/a)*(m/a)<<"��������"<<endl;
	
	return 0;
}
