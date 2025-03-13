#include<stdio.h>
#include<math.h>
 int power(int , int );
int main(){
	int n,m,z;
	float v;
	printf("Enter the first number=");
	scanf("%d",&n);
	printf("Enter the second number=");
	scanf("%d",&m);
	power(n,m);
//	printf("the power of first number is %d\n",z);
//	v=16;
//	printf("The square root of a number is %f\n",sqrt(v));
//}

int power(int n, int m){
	int z;
	z=pow(n,m);
	printf("%d",z);
	return z;
}

