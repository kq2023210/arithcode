/*
���ӣ�https://ac.nowcoder.com/acm/problem/18951
��Դ��ţ����

ƽ������n����,��������Ҫ��������·��һ����б��Ϊ1,
��һ��б��Ϊ-1
�����������������·���������ܶ�ĵ�
����ྭ��������
*/ 
#include<stdio.h>
int Two_diagonal_lines_main() 
{
    int x[1010],y[1010],n,i,k,j,sum = 0,s,a,b;
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
        scanf("%d",&x[i]);
    for(i = 1;i <= n;i++)
        scanf("%d",&y[i]); 
    for(i = 1;i <= n;i++)
        {
            a = x[i] - y[i];
            for(j = 1;j <= n;j++)
                {
                    s = 0;
                    b = x[j] + y[j];
                    for(k = 1;k <= n;k++)
                        {
                            if(x[k]+y[k] == b|| x[k]-y[k] == a) s++;
                        }
                if(s > sum) sum = s;
                }
             
        }
    printf("%d",sum);
    return 0;
}
