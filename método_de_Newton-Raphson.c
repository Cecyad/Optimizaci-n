#include <stdio.h>
#include <string.h>
#include <math.h>
void busqueda(double a,double b);
double formulaa(double num);
double formula(double num);
double formula2(double num);
void main()
{
    double a=0.0,b=0.0;

    printf("x1=");
      scanf("%lf", &a);
    printf("tolerancia=");
      scanf("%lf", &b);


    busqueda(a,b);

    printf("\nProblema 2\n");
    busqueda(0.1,0.0001);

}

void busqueda(double a,double b)
{
    int k=2,bandera=0;
    double lk=0.0,x1=0.0,x2=0.0,l=0.0,x3=0.0;
    double f,aa,bb,cc,f3,f2,fmin,xmin,gorrito,g,c,prom,fb;

    while (bandera==0)
    {
        f=formulaa(a);
        f2=formula(a);
        f3=formula2(a);
        //printf("%f ------ %f ----%f\n",f,f2,f3);

        fb=a-(f2/f3);
        printf("xk+1=%f\n",fb);

        aa= formula(fb);
        printf("f'(xk+1)=%f\n",aa);

        if (aa<b)
        {
            bandera=1;
        }
        else
        {
            a=fb;
        }
    }
    printf("\nx*=%f\n",fb); 
    printf("f(x)=%f\n",formulaa(fb));   

}
double formulaa(double num)
{
    double d,c,a,b,e,f;

    a=pow(num,2);
    b=a+1;
    c=sqrt(b);
    d=a/c;
    d=num-d; 
    return d;
}
double formula(double num)
{
    double d,c,a,b,e,f;

    a=pow(num,2)+1;
    b=pow(a,1.5);
    c=pow(num,3);
    d=b-c-(2*num);
    e= d/b;  
    return e;
}
double formula2(double num)
{
    double d,c,a,b,e,f;

    a=pow(num,2)-2;
    b=pow(num,2)+1;
    c= pow(b,2.5);
    d=a/c;
    return d;
}