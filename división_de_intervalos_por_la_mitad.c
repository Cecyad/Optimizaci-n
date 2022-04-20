#include <stdio.h>
#include <string.h>
#include <math.h>
void busqueda(float a,float b, float n);
void main()
{
    float a=0.0,b=0.0,pres=0.0,n=0.0;

    printf("a=");
      scanf("%f", &a);
    printf("b=");
      scanf("%f", &b);
    printf("tolerancia=");
      scanf("%f", &n);



    busqueda(a,b,n);


    printf("\nProblema 2\n");
    printf("a = 1/2\n");
    printf("b = 5/2\n");
    n=0.0001;
    busqueda(0.5,2.5,n);


}

void busqueda(float a,float b, float n)
{
    int bandera=0;
    float c=0.0,aux=0.0,x=0.0,x1=0.0,x2=0.0,inter=0.0,pres=0.0,l=0.0;
    double f,ant,sig;
    
    
    x=(a+b)/2;
    
    l=b-a;
    
    


    while(bandera==0)
    {
        f=(3*pow(x,2))+(12/pow(x,3))-5;

        x1= a + l/4;
        x2=b-l/4;

        ant=(3*pow(x1,2))+(12/pow(x1,3))-5;

        sig=(3*pow(x2,2))+(12/pow(x2,3))-5;

        printf("Valores de x=%f, x1=%f, x2=%f\n",x,x1,x2);
        //printf("funcion ant=%f, actual=%f, siguiente=%f\n",ant,f,sig);

        if(ant<f)
        {
            b=x;
            x=x1;
        }
        else if(sig<f)
        {
            a=x;
            x=x2;
        }
        else
        {
            a=x1;
            b=x2;
        }

        l=b-a;

        if(l<n)
        {
            bandera=1;
            printf("Valor de x = %f\n",x);
            printf("Funcion = %f\n",f);
        }
    }


}
