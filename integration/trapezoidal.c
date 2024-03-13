/* This program finds the value of integration of a function
   by Trapezoidal rule. Here we assume that f(x) = x^3. */

#include<stdio.h>

void main()
{
	float a,b,h,sum;
	int n,i;
	float f(float);
	printf("Enter the values of a, b: ");
	scanf("%f%f",&a,&b);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	h=(b-a)/n;
	sum=(f(a)+f(a+n*h))/2;
	for(i=1;i<n;i++)
		sum+=f(a+i*h);
	sum=sum*h;
	printf("The value of the integration is %8.5f: ",sum);
}

float f(float x)
{
	return(x*x*x);
}