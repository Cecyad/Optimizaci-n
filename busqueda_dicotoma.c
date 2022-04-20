#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void busqueda(float a,float b, float delt,int n,int p);
void main()
{
    float a=0.0,b=0.0;

    printf("a=0.0");
    printf("b=1.0");


    printf("\nProblema 2\n");
    busqueda(0.0,1.0,0.001,5,2);

    printf("\nProblema 3\n");
    busqueda(0.0,4.0,0.001,15,3);
  


}

void busqueda(float a,float b, float delt,int n,int p)
{
    int i=0,k=0;
    float ln=0.0,l0=0.0,c=0.0,x=0.0,ant=0.0,x1=0.0,x2=0.0,inter=0.0,l=0.0,e=0.0;
    double f,f1,f2,f3;

    k=n%2;
    if(k==1)
    {
        n++;
    }
    printf("n= %d\n",n);
    n=n/2;

    
    for(i=0;i<n;i++)
    {

        ant=x1;
        f3=f1;
        x1=((a+b)/2)-delt/2;
        x2=((a+b)/2)+delt/2;
        printf("x1=%f, x2=%f\n",x1,x2);

        if(p==2)
        {
            f1=x1*(x1-1.5);
            f2=x2*(x2-1.5);
        }
        else if(p==3)
        {
            f1=(3*pow(x1,4))+pow((x1-1),2);
            f2=(3*pow(x2,4))+pow((x2-1),2);
        }

        printf("funcion f1=%f, f2=%f\n",f1,f2);
        if(f1<f2)
        {
            b=x2;
        }
        else
        {
            a=x1;
        }

    }

    printf("\nIntervalo:(%f,%f)\n",ant,x2);
    

    x=((x2-ant)/2)+ant;
    printf("x=%f\n",x);
    if(p==2)
    {
        f=x*(x-1.5);
        printf("f=%f\n",f);
    }
    if(p==3)
    {
        f=(3*pow(x,4))+pow((x-1),2);
        printf("f=%f\n",f);      
    }

}