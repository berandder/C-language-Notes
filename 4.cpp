#include <iostream>
#include <cmath>
using namespace std;
int main() {
/*  int a=3,b=3,c=3;
	cout<<++a<<"  "<<b++<<"  "<<c+1<<endl;
	cout<<a<<"  "<<b<<"  "<<c<<endl;        */
	
	int x,y,z;
	x=y=1,z=x++-1;
	cout<<x<<"  "<<z<<endl; 
	
	cout<<ceil(3.14)<<"  "<<floor(3.14)<<endl<<"4的3次方="<<pow(4,3.0)<<endl<<"根号9="<<sqrt(9)<<endl;
	
	int g5=120,g6=150,t=540,p=t/(g5+g6);
	cout<<"五年级分到"<<p*g5<<"棵树苗"<<endl<<"六年级分到"<<p*g6<<"棵树苗"<<endl; 
	
/*  int a=23,h=51;
	float s=a*h/2.0;
	cout<<s<<endl;    */
	
	int a=1562345672,b=1456789343,c=1234567832;
	long long s=(long long)a+b+c;
	cout<<s<<endl;
	
	return 0;
}
/*  #include <cmath>
	ceil()	  向上取整__
	floor()   向下取整__
	pow(,)    __的__.__次方幂 
	sqrt()	  根号__
	
	数据类型转换：1，自动类型转换
				  2，强制类型转换

	在不同数据类型的混合运算中，编译器会隐藏式地进行数据类型的转换，
	称为自动类型转换
	遵循规则：1，若参与运算的数据类型不同，则先转换成同一类型，然后进行运算
			  2，转换按数据长度增加的方向进行，以保证精度不降低
				 char(short)（短整型）->int(long)（整型）->float（单精度实型）
				 ->double（双精度实型）
			  3，在赋值运算中，赋值号两边的数据类型不相同时，将把右边表达式
			     值的类型转化为左边变量的类型，如果右边表达式的值的数据类型
				 长度比左边长时，将丢失一部分数据
			  4，在赋值语句中，赋值号两边数据类型一定是相兼容的类型，如果等号
			     两边数据类型不兼容，语句将在编译的时候报错

	当自动类型转换不能实现目的时，可以显式进行类型转换，称为强制类型转换
	强制类型转换的一般形式：1，(类型名)(表达式)
							2，(类型名)(变量名)
	例：(double)a就是将a转换成double类型，(int)(x+y)(float)(5%3)               */
