#include<stdio.h>

main()
{
	int y1,y2,i;
	printf("enter year for starting = ");
	scanf("%d",&y1);
	printf("enter year for ending = ");
	scanf("%d",&y2);
	int array [100],l=0;
	for(i=y1;i<=y2;i++)
	{
		if(i%4==0)
		{
			array[l] = i;
			l++;
		}
	}
	for(i=0;i<l;i++)
	{
		printf("array[%d] = %d\n",i,array[i]);
	}
}