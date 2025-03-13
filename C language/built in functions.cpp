//Topic:   using builin functions of c which is included in math.h library

#include<stdio.h>

//including math.h library

#include<math.h>

int main(){
	
//	declaring variables
	
	int n,m,z,o;
	float v,y;
	
//	getting numbers from the user
	
	printf("Enter the first number=");
	scanf("%d",&n);
	printf("Enter the second number=");
	scanf("%d",&m);
	
//	Finding power of a number
	
	z=pow(n,m);
	printf("the power of first number is %d\n",z);
	
//	finding square root of a number
	
	v=16.7;
	printf("The square root of a number is %f\n",sqrt(v));
	
//	finding round off a number
	
	printf("The round off a number is %f\n",round(v));
	
//	calling ceil function
	
	y=15.7;
	printf("The ceil of a number is %f\n",ceil(y));
	
//	finding absolute of a number
	
	o=-23;
	printf("the absolute value of a number is %d\n",abs(o));
	
//	flour function of a number

	printf("The floor of a number is %f\n",floor(y));
	
//	sin of a number
	
	float a=0;
	printf("The sin of a number is %f\n",sin(a));
	
//	coss of a number
	
	
	printf("The cosine of a number is %f\n", cos(a));
	
//	tangent of a number

	printf("The tangent of a number is %f\n", tan(a));

//	sinhyperbolic of a number is

	printf("The sinhyperbolic of a number is %f\n",sinh(a));
	
//	coshyperbolic of a number is

	printf("The coshyperbolic of a number is %f\n",cosh(a));

//	tanhyperbolic of a number is

	printf("The tanhyperbolic of a number is %f\n",tanh(a));


//	log of a number is

	float b=3456.78;
	printf("The log of a number is %f\n",log(b));

//	exponential of a number is

	printf("The exponential of a number is %f\n",exp(a));
	
//	log hyperbolic of a number is

	printf("The log Hyperbolic of a number is %f\n",log10(b));





}

