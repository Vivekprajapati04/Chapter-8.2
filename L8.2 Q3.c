#include<stdio.h>
main()
{
	int n,i;
	printf("size of Array Elements=");
	scanf("%d",&n);
	int a[n],square;
	
	printf("Enter A Array Element=\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		
	}
	printf("number  = square\n");
	
	for(i=0;i<n;i++)
	{
		square= a[i]*a[i];
		printf("%d =  %d\n",& a[i], a[i]*a[i]);
	
	}	
}