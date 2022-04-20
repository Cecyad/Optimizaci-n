#include <stdio.h>
#include <string.h>
#include <math.h>

void busqueda(float a,float b, float n);
void main()
{
    float a=0.0,b=0.0,n=0.0;

    printf("a=");
      scanf("%f", &a);
    printf("b=");
      scanf("%f", &b);
    printf("Precisión=");
      scanf("%f", &n);

    busqueda(a,b,n);


    printf("\nProblema 2\n");
    printf("a = -10\n");
    printf("b = 5\n");
    printf("Precisión = 0.0001\n");
    n=0.0001;
    busqueda(-10,5,n);
}

void busqueda(float a,float b, float n)
{
    int k=1,bandera=0;
    float nor=0.0,nor1=0.0,w1=0.0,w2=0.0,lw=0.0,aw=0.0,bw=0.0;
    double f,f1,x,x2;

    aw=0;
    bw=1;
    lw=bw-aw;

    while (bandera==0)
    {
        w1=aw+(0.618)*lw;
        w2=bw-(0.618)*lw;
        //printf("w1= %f, w2=%f, lw=%f, aw=%f, bw=%f\n",w1,w2,lw,aw,bw);
        nor=(w1*(b-a)+a);
        nor1=(w2*(b-a)+a);
        f=pow(nor,2)-10*exp(0.1*nor);
        f1=pow(nor1,2)-10*exp(0.1*nor1);
        if (f<f1)
        {
            aw=w2;
        }
        else
        {
            bw=w1;
        }
        lw=bw-aw;
        if (lw<n)
        {
            aw=(aw*(b-a)+a);
            bw=(bw*(b-a)+a);
            printf("Intervalo: %f,%f\n",aw,bw);
            x=(aw+bw)/2;
            printf("x*=%f\n",x);
            x2=pow(x,2)-10*exp(0.1*x);
            printf("f(x*)= %f\n",x2);
            bandera=1;
        }
        else
        {
            k=k+1;
        }
        
    }

}
