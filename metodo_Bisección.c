#include <stdio.h>
#include <string.h>
#include <math.h>
void busqueda(double a,double b,double c);
double formula(double num);
double formulaa(double num);
void main()
{
    double a=0.0,b=0.0,c=0.0;

    printf("a=");
      scanf("%lf", &a);
    printf("b=");
      scanf("%lf", &b);
    printf("tolerancia=");
      scanf("%lf", &c);


    busqueda(a,b,c);

    printf("\nProblema 2\n");
    busqueda(-2,5,0.00001);

}

void busqueda(double a,double b,double c)
{
    int k=1,bandera=0;
    double lk=0.0,x1=0.0,x2=0.0,l=0.0,x3=0.0;
    double z,f,aa,bb,cc,f3,f2,fmin,xmin,gorrito,g,prom,fb,f4;

    while (bandera==0)
    {
        printf("Iteracion %d \n",k);
        k++;
        f=formula(a);
        f2=formula(b);
        if (f>0)
        {
            printf("f'(a) es mayor de 0\n");
            break;
        }
        if (f2<0)
        {
            printf("f'(b) es menor de 0\n");
            break;
        }
        
        z=(a+b)/2;
        f3=formula(z);

        printf("z=%f   f(z)=%f   f'(z)=%f\n",z,formulaa(z),f3);  

        f4=f3;
        if (f4<0)
        {
            f4=f4*-1;
        }
        
        if (f4<=c)
        {
            bandera=1;
        }
        else
        {
            if (f3<0)
            {a=z;}
            if (f3>0)
            {b=z;}
        }
    }
    

}

double formula(double num)
{
    double a,b,c;

    a=exp(num);
    b=pow(num,2) * 3;
    c=a-b;
    return c;
}
double formulaa(double num)
{
    double a,b,c;

    a=exp(num);
    b=pow(num,3);
    c=a-b;
    return c;
}
