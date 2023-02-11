#include <iostream>
using namespace std;
#include <math.h>
//牛顿迭代法求方程的根 ax^3 +bx^2 +cx+d=0方程根   x^3 +2x^2 +3x+4=0
int newton_iteration(float a,float b,float c,float d){
	float x1=1,x0,f0,f1;
	do{
		x0=x1;
		f0=((a*x0+b)*x0+c)*x0+d;
		f1=(3*a*x0+2*b)*x0+c;
		x1=x0-f0/f1;
	}while (fabs(x1-x0)>=1e-4); 
	return x1;	
}
int newton_test(){
	float a,b,c,d;
	cout<<"input a,b,c,d\n";
	cin>>a>>b>>c>>d;
	cout<<"方程的根为："<<newton_iteration(a,b,c,d)<<endl;
}
