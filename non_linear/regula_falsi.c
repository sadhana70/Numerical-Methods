#include<stdio.h>
#include<math.h>

float f(float x){
    return (cos(x)-x*exp(x));
}

void regula(float *x, float X0, float X1,float fX0, float fX1, int *itr){
    *x=X0-((X1-X0)/(fX1-fX0))*fX0;
    ++(*itr);
    printf("Iteration no: %3d X=%7.5f\n",*itr,*x);
}

int main(){
    int itr=0, maxmitr;
    float x,X0,X1,fx0,fX1, allerr, x3;
    printf("\n Enter the values of X0,X1, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &X0,&X1, &allerr,&maxmitr);
    regula(&x,X0,X1,f(X0),f(X1),&itr);
    do{
        if(f(X0)*f(x)<0)
            X1=x;
        else
            X0=x;
        regula(&x3, X0,X1,f(X0),f(X1),&itr);
        if(fabs(x3-x)<allerr){
            printf("After %d iterations, root=%6.4f\n",itr, x3);
            return 0;
        }
        x=x3;
    }while(itr<maxmitr);
    printf("The solution doesn't converge and iterations aren't sufficient.\n");
    return 0;
}