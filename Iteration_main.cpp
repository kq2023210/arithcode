#include "c2/c2.h"

void Iteration_menu(){
printf( "\n\n---------���� ���������--------------\n");
printf( "   1 ��ԽɳĮ (���Ʒ�)\n");
printf( "   2 ţ�ٵ����󷽳̵ĸ� f(x)= x^3 +2x^2 +3x+4=0 \n");
printf( "   3 ���ַ��󷽳̵ĸ�  f (x)= x^3/2+2x^2һ8=0  [0,2]\n");
printf( "   0 �˳�\n");
printf( "----------end--------------\n");
printf("����Ҫִ�е���� n\n");
}

int Iteration_main() {
	int n;
	Iteration_menu();
    do
    {
		scanf("%d",&n);
		switch (n){
		case 1: cross_desert();break;	
		case 2:newton_test();break;
		case 3:dichotemizing_test();break;
		case 0:printf("�˳� ���� ���������\n") ;break;
		}
	}while(n);
		return 0;
}
