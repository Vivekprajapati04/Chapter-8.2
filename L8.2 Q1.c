#include<stdio.h>
main()
{
	int n,n1,n2,i,k;
	printf("size of A Array Elements=");
	scanf("%d",&n1);
	printf("size of B Array Elements=");
	scanf("%d",&n2);
	n = n1+n2;
	int a[n1],b[n2],merg[n];
	
	printf("Enter A Array Element=\n");
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		merg[i]=a[i];
		k=i;
		k++;
	}
	
	printf("Enter B Array Element=\n");
	
	for(i=0;i<n2;i++)
	{
		printf("b[%d]= ",i);
		scanf("%d",&b[i]);
		merg[k]=b[i];
		k++;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",merg[i]);	
	}	
	
}