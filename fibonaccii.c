#include <stdio.h>
#include <string.h>
#include <math.h>
int fibo(int num);
void busqueda(float a,float b, int n);
void main()
{
    float a=0.0,b=0.0,p=0.0,i=0.0,nn=0.0;
    int cont=0,n=0;

    printf("a=");
      scanf("%f", &a);
    printf("b=");
      scanf("%f", &b);
    printf("iteraciones=");
      scanf("%d", &n);


    busqueda(a,b,n);


    printf("\nProblema 2\n");
    printf("a = -5.0\n");
    printf("b = 5.0\n");
    a=-5;
    b=5;
    nn=b-a;
    nn=nn*2;
    p=0.0001;
    cont=0;
    while (p<nn/fibo(cont+1))
    {
        cont++;
    }
    printf("iteraciones= %d\n",cont);
    busqueda(-5,5,cont);
}

void busqueda(float a,float b, int n)
{
    int k=2,i=0,f1=0,f2=0;
    float lk=0.0,x1=0.0,x2=0.0,l=0.0,x3=0.0;
    double f,ant,sig,p1,p2,f3=0;

    l=b-a;
    if(n>1)
    {

        for(i=0;i<n;i++)
        {
            f1=n-k+1;
            f2=n+1;
            lk=l * fibo(f1)/fibo(f2);
            x1=a + lk;
            x2=b - lk;
            if(i==0)
            {
                p1=10+pow(x1,3)-(2*x1);
                ant=p1-5*exp(x1);
                p2=10+pow(x2,3)-(2*x2);
                sig=p2-5*exp(x2);
            
            }
            else if(x3== x2)
            {
                p1=10+pow(x1,3)-(2*x1);
                ant=p1-5*exp(x1);
                sig=f3;
                
            }
            else
            {
                ant=f3;
                p2=10+pow(x2,3)-(2*x2);
                sig=p2-5*exp(x2);
                
            }
            
            //printf("x1= %f, x2=%f, ant=%f, sig=%f\n",x1,x2,ant,sig);
        
            if (ant>sig)
            {
                a=x1;
            }
            else if (ant<sig)
            {
                b=x2;  
            }
            else if (ant==sig)
            {
                break;
            }
        
            k=k+1;

            if (ant<sig)
            {
                f3=ant;
                x3=x1;
            }
            else
            {
                f3=sig;
                x3=x2;
            }
            
        }
    }
    printf("Intervalo = (%f,%f)\n",a,b);
    printf("Valor de x*=%f\n",x1);
    printf("Valor de f(x*)=%f\n",ant);
}

int fibo(int num)
{
    int c=0, d=1, e=1,i=0;

    if(num<2)
    {
        return 1;
    }
    else
    {
        for(i=1;i<num;i++)
        {
            c=d+e;
            d=e;
            e=c;
        }
        return c;
    }
}