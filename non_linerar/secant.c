#include<stdio.h>
#include<math.h>

float f(float x){
    return (x*x*x-4);
}

int main(){
    int count=1, n;
    float a,b,c,d,e;
    printf("\n Enter the values of a,b, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &a,&b, &e,&n);
    if(f(a)==f(b)){
            printf("Solution can't be found as a and b are same.\n");
            return 0;
        }
    do{
        
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        printf("At iteration no. %d, x=%f\n",count, c);
        count++;
        if(count==n)
        {
            break;
        }
    }while((fabs(c))>e);
    printf("The required solution is %f\n",c);
    
}