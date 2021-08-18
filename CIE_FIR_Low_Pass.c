#include <stdio.h>
#include <math.h>
#define pi 3.147
int main()
{
    float fs,fp,rs,wc,wp,ws,tw,h[30],wn,hn,tao;
    int Fs,n,N;
    printf("Enter the stop band frequency\n");
    scanf("%f",&fs);
    printf("Enter pass band frequency\n");
    scanf("%f",&fp);
    printf("Enter samping frequency\n");
    scanf("%d",&Fs);
    printf("Enter the stop band attenuation\n");
    scanf("%f",&rs);
    wp = 2*pi*fp/Fs;
    ws = 2*pi*fs/Fs;
    wc = (wp+ws)/2;
    if(wp-ws)
        tw = wp-ws;
    else
        tw = ws-wp;
    N = ceil(8*pi/tw);
    if(N % 2 == 0)
        N = N+1;
    tao = (N-1)/2;
    for(n=0;n<N;n++)
    {
        wn = 0.54 - 0.46*cos(2*pi*n/(N-1));
        if(n != tao)
            hn = (1/(pi*(n-tao))*(sin(wc*(n-tao))));
        else
            hn = wc/pi;
        h[n] = wn*hn;
    }
    for(n=0;n<N;n++)
    {
        printf("h[%d] = %f\n",n,h[n]);
    }
}