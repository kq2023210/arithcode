#include <iostream>
#include "main.h"
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu1(){
	
	printf("**********************\n"	);
	printf("4������\n"	);
	printf("0 �˳�\n"	);
}
void menu(){
	menu1();
printf( "\n\n----------2���������--------------\n");
printf( "1 ��ԽɳĮ (���Ʒ�)\n");
printf( "2 ţ�ٵ����󷽳̵ĸ� f(x)= x^3 +2x^2 +3x+4=0 \n");
printf( "3 ���ַ��󷽳̵ĸ�  f (x)= x^3/2+2x^2һ8=0  [0,2]\n");
printf( "0 �˳�\n");
printf( "----------end--------------\n");
cout<<"input n\n";
}

int main(int argc, char** argv) {
	int  n;
	menu();
	cin>>n;
    while(n)
    {
	
		switch (n){
		case 1: cross_desert();break;
		case 2:newton_test();break;
		case 3:dichotemizing_test();break;
		case 4:Sortmain();break;
		case 0:break;
		}
		menu();
		cin>>n;
	
}
system("pause") ;
	return 0;
}
