#include <stdio.h>
#include <math.h>
#define pi 3.147
int main()
{
    int xn[30],hn[30],i,j,M,L,N,y[30],sum;
    printf("Enter the length of x(n)\n");
    scanf("%d",&L);
    printf("Enter the length of h(n)\n");
    scanf("%d",&M);
    printf("Enter x(n)\n");
    for(i=0;i<L;i++)
        scanf("%d",&xn[i]);
    printf("Enter h(n)\n");
    for(i=0;i<M;i++)
        scanf("%d",&hn[i]);
    if(L>M)
    {
        N = L;
        for(i=L;i<N-L;i++)
            xn[i] = 0;
        for(i=M;i<N-M;i++)
            hn[i] = 0;
    }
        
    else    
    {
        N = M;
        for(i=L;i<N-L;i++)
            xn[i] = 0;
        for(i=M;i<N-M;i++)
            hn[i] = 0;
    }
    for(i=0;i<N;i++)
    {
        printf("x[%d] = %d\n",i,xn[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("h[%d] = %d\n",i,hn[i]);
    }
    for(i=0;i<N;i++)
    {
        sum = 0;
        for(j=0;j<N;j++)
        {
            if(i-j < 0)
                sum =  sum + xn[j]*hn[i-j+N];
            else
                sum = sum + xn[j]*hn[i-j];
        }
        y[i] = sum;
    }
    for(i=0;i<N;i++)
    {
        printf("y[%d] = %d\n",i,y[i]);
    }
    
    return 0;
}