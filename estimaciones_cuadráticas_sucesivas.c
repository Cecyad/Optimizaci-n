#include <stdio.h>
#include <string.h>
#include <math.h>
void busqueda(double a,double b, int n);
double formula(double num);
void main()
{
    double a=0.0,b=0.0,p=0.0,i=0.0,nn=0.0;
    int cont=0,n=0;

    printf("x1=");
      scanf("%lf", &a);
    printf("incremento=");
      scanf("%lf", &b);
    printf("iteraciones=");
      scanf("%d", &n);


    busqueda(a,b,n);

    printf("\nProblema 3\n");
    busqueda(2,0.5,3);
}

void busqueda(double a,double b, int n)
{
    int k=2,i=0;
    double lk=0.0,x1=0.0,x2=0.0,l=0.0,x3=0.0;
    double f,aa,bb,cc,f3,f2,fmin,xmin,gorrito,g,c,fb,xb;

    x1=a;
    x2=x1 + b;

    for (i = 0; i < n; i++)
    {
        printf("\nIteracion: %d\n",i+1);
        
        f=formula(x1);   f2=formula(x2);
        if (i==0)
        {
            if (f>f2)
            {
                x3=x1+2*b;
                b=2*b;
            }
            else
            {
                x3=x1-b;
            }
        }
        
        f3=formula(x3);

        if(f<f2)
        {
            if (f<f3)
            {fmin=f; xmin=x1;}
            else
            {fmin=f3; xmin=x3;}
        }
        else
        {
            if (f2<f3)
            {fmin=f2; xmin=x2;}
            else
            {fmin=f3; xmin=x3;}   
        }
        printf("x1=%f, x2=%f, x3=%f, fmin=%f, xmin=%f , f1=%f, f2=%f, f3=%f\n",x1,x2,x3,fmin,xmin,f,f2,f3);


        while (f3<f2)
        {
            b=b+b;
            f2=f3;
            x2=x3;
            if (f2<f)
            {
                fb=f2;
                xb=x2;
            }
            c=2*b;
            x3=x1+c;
            f3=formula(x1+c);
        }

        printf("f2=%f, f3=%f, x2=%f, x3=%f\n",f2,f3,x2,x3);

        gorrito=(4*fb-3*f-f3)*b;
        g=4*fb-2*f3-2*f;
        gorrito=gorrito/g;

        printf("xg = %f, f(xg)=%f\n",gorrito,formula(gorrito));
        
        if (gorrito < b)
        {
            x1=gorrito;
            //x2=x1 + b;
            //x3=x1 +2*b;
            //x2=xmin;
            
        }
        printf("xmin = %f, x1=%f x2=%f x3=%f, fmin=%f, f1=%f, f2=%f, f3=%f\n",xmin,x1,x2,x3,fmin,formula(x1),f2,f3); 
    }
    printf("\nx* = %f, f(x*)=%f \n",gorrito,formula(gorrito));

}
double formula(double num)
{
    double c=0, d=0;

    c=pow(num,3)*10 + pow(num,2)*3 + 5;
    d=pow(c,2);
    return d;
}
