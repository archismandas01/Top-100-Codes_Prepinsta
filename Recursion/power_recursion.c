#include<stdio.h>
int pow(int a , int b)
{
	if(b==0)
	return 1;
	else
	return a*pow(a,b-1);
}
int main()
{
	int a,b;
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	printf("%d",pow(a,b));
}
