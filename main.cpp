#include <iostream>
#include "main.h"
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	
	printf("\n*******���˵�***************\n"	);
	printf("һ�� ������\n"	);
	printf("���� ������������\n"	);
	printf("0 �˳�\n"	);
}


int main(int argc, char** argv) {
   int  n;	
   do
    { menu();
	  cin>>n;
		switch (n){
		case 2: Iteration_main();break;
		case 1:Sort_main();break;
		case 0:printf("���˵�\n");break;
		}			
	} while(n);
	system("pause") ;
	return 0;
}
