#include<stdio.h>
#include<math.h>

float f(float x){
    return (x*log10(x)-1.2);
}

float df(float x){
    return (log10(x)+0.43429);
}

int main(){
    int itr, maxmitr;
    float h, x0, x1, allerr;
    printf("\n Enter the values of x0, allowed error and maximum iterations:\n");
    scanf("%f %f %d", &x0, &allerr,&maxmitr);
    for(itr=1; itr<=maxmitr;itr++){
        h=f(x0)/df(x0);
        /*printf("%f",h);*/
        x1=x0-h;
        printf("At %d iteration no. x=%6.4f\n",itr, x1);
        if(fabs(h)<allerr){
            printf("After %d iterations, root=%6.4f\n",itr, x1);
            return 0;
        }
        x0=x1;
    }
    printf("The solution doesn't converge and iterations aren't sufficient.\n");
    return 0;
}