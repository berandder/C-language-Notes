#include <iostream> 
using namespace std;
int main()  {
/*  int n;
	cout<<"n="<<endl;
	cin>>n;
	if(n<0)
	cout<<"ע�⸺����"<<endl;
	else
	cout<<n<<endl;
	
	int n;
	cout<<"n="<<endl;
	cin>>n;
	if(n%2==0)
	cout<<n<<"��ż����"<<endl;
	else
	cout<<n<<"��������"<<endl;
	
	int n;
	cout<<"n="<<endl;
	cin>>n;
	if(n<=80)
	cout<<"��ӭ�����������"<<endl;
	else
	cout<<"�ǳ���ӭ�����������"<<endl;
	
	int n;
	float a,b;
	cout<<"n="<<endl;
	cin>>n;
	a=n*3*0.88,b=(n-n/8)*3;
    if(a<b)
    cout<<"�����̳�"<<endl;
    else
    cout<<"�ٻ�����"<<endl;  */
    
    int n,l,t,p;
    cout<<"n="<<endl;
    cin>>n;
    if(n<100000) {
    cout<<"������"<<n/500<<"��"<<endl;
    }
    else {
    l=n*0.3/500,t=n*0.5/600,p=n*0.2/800;
    cout<<"������"<<l<<"��"<<endl<<"������"<<t<<"��"<<endl<<"ƻ������"<<p<<"��"<<endl;
	}	
	return 0;
}

/*  if�����ʽ�����
	���ܣ����������������ʽΪ��ʱ��ִ�С���䡱������ִ��if����·�����䡣
	
	if�����ʽ��
		���1;
	else
		���2;
	���ܣ����������������ʽֵΪ��ʱ��ִ�С����1��������ִ�С����2����
	
	��ϵ��������ʽ��
	�����ڣ�!=
	���ȼ��� 
	> < >= <= ��
	== !=     ��
	
	����ֵ1�����桱������ֵ0�����١���
	
	a>b            0
	a+b>b+c        0
	(a==3)>=(b==5) 1
	'a'<'b'        1
	(a>b)>(b<c)    0
	*/
