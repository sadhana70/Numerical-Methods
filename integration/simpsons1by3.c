#include<stdio.h>

float f(float x){
    return(1/(1+x));
}

int main(){
    float a,b,h,so,se,ans,y[20];
	int n,i,x[20];
	printf("Enter the values of a, b: ");
	scanf("%f %f",&a,&b);
	printf("\nEnter the value of h: ");
	scanf("%f",&h);
	n=(b-a)/h;
    if(n%2==1){
        n=n+1;
    }
    h=(b-a)/n;
    printf("Refined values of n and h are:%d,%f ", n,h);
    printf("Y values:\n");
    for(i=0;i<=n;i++){
        x[i]=a+i*h;
        y[i]=f(x[i]);
        printf("%f\n",y[i]);
    }
    so=0;
    se=0;
	for(i=1;i<n;i++){
        if(i%2==1){
            so=so+y[i];
        }
        else{
            se=se+y[i];
        }
    }
	ans=h/3*(y[0]+y[n]+4*so+2*se);
	printf("The value of the integration is %8.5f: ",ans);
    return 0;
}