#include <iostream>
using namespace std;
int main() {
/*	char a;
	cin>>a;
	cout<<(a>='A'&&a<='Z'?a+=32:a)<<endl;
	//cout<<(a>=65&&a<=90?a+=32:a)<<endl;
	
	int man,woman;
	cin>>man>>woman;
	if(man+woman<10) cout<<"��ˮ"<<endl;
	if(man+woman>=10) {
		if(man>woman) cout<<"�ɲ�"<<endl;
		if(man<=woman) cout<<"����"<<endl;
	}
	
	float w;
	cin>>w;
	if(w>30) cout<<"�޷��ʼ�"<<endl;
	if(w<=10) cout<<"���ã�"<<w*0.8+0.2<<"Ԫ"<<endl;
	if(10<w&&w<=20) cout<<"���ã�"<<w*0.75+0.2<<"Ԫ"<<endl;
	if(20<w&&w<=30) cout<<"���ã�"<<w*0.7+0.2<<"Ԫ"<<endl;
	
	float x,y;
	cin>>x>>y;
	if(x<=1&&x>=-1&&y<=1&&x>=-1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;*/
	
	char p;
	cin>>p;
	if(p%123>=97&&p%123<=122) cout<<p-32<<endl;
	if(p%91>=65&&p<=90) cout<<p+32<<endl;
	else cout<<"*"<<endl; 
	
	return 0;
}
