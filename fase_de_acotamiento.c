#include <stdio.h>
#include <string.h>
#include <math.h>

void busqueda(float a,float l);
void main()
{
    float l=0.0,a=0.0;
    
    printf("Punto inicial=");
      scanf("%f", &a);
    printf("Incremento=");
      scanf("%f", &l);
    
    busqueda(a,l);
    
    printf("\nProblema 2\n");
    busqueda(0.0,1.0);
}

void busqueda(float a,float l)
{
    int bandera=0,k=0;
    float b=0.0,x=0.0,x1=0.0,punto=0.0,f0=0.0,f=0.0,f1=0.0,p=0.0;
    double ant,sig;

    x=a-l;
    x1=a+l;

    f=pow(1-x,4) - pow((2*x)+10,2);
    f0=pow(1-a,4) - pow((2*a)+10,2);
    f1=pow(1-x1,4) - pow((2*x1)+10,2);

    if(f>=f0 && f0>=f1)
    {
        printf("Positivo\n");
    }
    else if(f<=f0 && f0<=f1)
    {
        printf("Negativo\n");
    }

    bandera=0;
    printf("Valores de (x)^(k):\n");
    b=a;
    while(bandera==0)
    {
        punto=b+pow(2,k)*l;
        f=pow(1-b,4) - pow((2*b)+10,2);
        f1=pow(1-punto,4) - pow((2*punto)+10,2);

        printf("%f\n",b);
        if(f1<f)
        {
            k = k + 1;
        }
        else
        {
            printf("El minimo se encuentra en el intervalo: (%f,%f)\n",b,punto);
            bandera=1;
        }
        b=punto;
    }

}
