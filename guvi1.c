#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>0)
		printf("Postive");
	if(n<0)
		printf("Negative");
	if(n==0)
		printf("Zero");
	return 0;
}
