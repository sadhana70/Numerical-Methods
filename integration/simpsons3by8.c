#include<stdio.h>

float f(float x){
    return(1/(1+x*x));
}

int main(){
    float a,b,h,so,se,ans,y[20];
	int n,i,j,flag,x[20];
	printf("Enter the values of a, b: ");
	scanf("%f %f",&a,&b);
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	h=(b-a)/n;
    ans=f(a)+f(b);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-1;j++){
            if(i==3*j){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
            if(flag==0)
                ans+=3*f(a+i*h);
            else
                ans+=2*f(a+i*h);
        }
    }
	printf("The value of the integration is %8.5f: ",(3*h)/8*ans);
    return 0;
}