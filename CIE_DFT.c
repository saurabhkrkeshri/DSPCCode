#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float x[100],x_real[100],x_imag[100];
    int N;
    int k=0,n=0;
    int x_r[100],x_i[100];
    printf("enter the length of sequence \n");
    scanf("%d",&N);
    printf("enter the sequnece\n");
    for(n=0;n<N;n++)
    {
      scanf("%f",&x[n]);
    }
    for(k=0;k<N;k++)
    {
      x_real[k] = 0.0;
      x_imag[k] = 0.0;
      for(n=0;n<N;n++)
      {
        x_real[k] = x_real[k] + x[n]*cos(2*pi*(n)*k/N);
        x_imag[k] = x_imag[k] + x[n]*sin(2*pi*(n)*k/N);
      }
      x_imag[k] = -1.0 * x_imag[k];
    }
    printf("DFT\n Real \t\t Imaginary\n");
    for(n=0;n<N;n++)
    {
        x_r[n] = (int)x_real[n];
        x_i[n] = (int)x_imag[n];
      printf("%d\t\t%d\n",x_r[n],x_i[n]);
    }
    
    return 0;
}