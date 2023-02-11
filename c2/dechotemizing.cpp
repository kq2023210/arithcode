//二分法求方程的根  f (x)= x^3/2+2x^2一8=0 [0,2]
#include <iostream>
#include <math.h>
using namespace std; 
float f(float x){
	return x*x*(x/2+2)-8;
}
int dichotemizing(float a,float b){
 float	fa,fb,fm,m;
 fa=f(a);
 fb=f(b);
 if (fa*fb>0) {
 	 cout<<"noroot";return -1;
    }
 do{
 	m=(a+b)/2;
 	fm=f(m);
 	if (fm=0)break;
 	if (fa*fm>0){
 		a=m;fa=fm;
	 }
	 else
	  {b=m;fb=fm;} 
}while (fabs(a-b)>1e-4);
cout <<"root="<<m<<endl;
}
int dichotemizing_test(){
	float a,b;
	cout<< "input a,b,f(a)*f(b)<0\n";
	cin>>a>>b;
	dichotemizing(a,b);
}
