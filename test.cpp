#include<stdio.h>
int main()
{
	int n,flag=0;
	printf("entre the number:");
	scanf("%d",&n);
	
	for(int i=2;i<n/2;i++){
		if(n%i==0)
		flag=1;
		break;
       }
	if(flag==1)
     printf(" not prime ");
	else
	printf(" is prime number");
	return 0;
}
