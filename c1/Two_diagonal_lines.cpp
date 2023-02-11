/*
链接：https://ac.nowcoder.com/acm/problem/18951
来源：牛客网

平面上有n个点,现在你需要建造两条路，一条是斜率为1,
另一条斜率为-1
你的任务是让这两条路经过尽可能多的点
求最多经过几个点
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
