#include "c2/c2.h"

void Iteration_menu(){
printf( "\n\n---------二、 迭代与递推--------------\n");
printf( "   1 穿越沙漠 (倒推法)\n");
printf( "   2 牛顿迭代求方程的根 f(x)= x^3 +2x^2 +3x+4=0 \n");
printf( "   3 二分法求方程的根  f (x)= x^3/2+2x^2一8=0  [0,2]\n");
printf( "   0 退出\n");
printf( "----------end--------------\n");
printf("输入要执行的序号 n\n");
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
		case 0:printf("退出 二、 迭代与递推\n") ;break;
		}
	}while(n);
		return 0;
}
