#include <stdio.h>
#include <math.h>
#define pi 3.147
int main()
{
    int xn[30],hn[30],L,M,N,i,j,sum,y[30];
    printf("Enter the sequence lenght of x(n)\n");
    scanf("%d",&L);
    printf("Enter the sequence length of h(n)\n");
    scanf("%d",&M);
    printf("Enter x(n) sequence\n");
    for(i=0;i<L;i++)
        scanf("%d",&xn[i]);
    for(i=0;i<M;i++)
        scanf("%d",&hn[i]);
    N = L+M-1;
    //Padding
    for(i=L;i<N-L;i++)
        xn[i] = 0;
    for(i=M;i<N-M;i++)
        hn[i] = 0;
    for(i=0;i<N;i++)
    {
        printf("x[%d] = %d\n",i,xn[i]);
        printf("h[%d] = %d\n",i,hn[i]);

    }
    for(i=0;i<N;i++)
    {
        sum = 0;
        for(j=0;j<i;j++)
        {
            sum = sum + xn[j]*hn[i-j];
        }
        y[i] = sum;
    }
    for(i=0;i<N;i++)
    {
        printf("y[%d] = %d\n",i,y[i]);
    }
    

}