#include <stdio.h>
#include <string.h>
#include <math.h>
void busqueda(float a,float b, int n);
void main()
{
    int n=0;
    float a=0.0,b=0.0,pres=0.0;

    printf("a=");
      scanf("%f", &a);
    printf("b=");
      scanf("%f", &b);
    printf("n=");
      scanf("%d", &n);

    busqueda(a,b,n);
    
    pres=0.0001;
    n=2*(3.0-0.0)/pres;

    printf("\nProblema 2\n");
    printf("Presición = 0.0001\n");
    printf("Puntos intermedios=%d\n",n);
    busqueda(0.0,3.0,n);


}

void busqueda(float a,float b, int n)
{
    int i=0,cont=0;
    float c=0.0,aux=0.0,x=0.0,x1=0.0,inter=0.0,pres=0.0;
    double f,ant,sig;
    
    c=(b-a)/n;
    x=a;
    ant=0.65-(0.75/(1+pow(x,2))) - 0.65 * x * atan(1/x);
    inter=x;
    cont=0;
    for(i=1; i<n; i++)
    {
        x1=inter +c;
        f=0.65-(0.75/(1+pow(x1,2))) - 0.65 * x1 * atan(1/x1);
        i++;
        x=x1+c;
        sig=0.65-(0.75/(1+pow(x,2))) - 0.65 * x * atan(1/x);
        cont++;

        if(ant >= f && f <= sig)
        {
            printf("Valor funcion; Anterior: %f, Optimo: %f, Siguiente: %f\n",ant,f,sig);
            printf("Intervalo = (%f,%f)\n",inter,x);
            break;
        }
      
        ant=f;
        inter=x1;
        i--;
    }

}
