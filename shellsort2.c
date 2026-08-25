#include<stdio.h>
void main()
{
	int a[5];
	int i,j,gap,temp;
	int n=6;
	printf("enter any 6 number=");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(gap=n/2;gap>0;gap=gap/2)
	{
		for(i=gap;i<n;i++)
		{
			temp=a[i];
			for(j=i;j>=gap && a[j-gap]>temp;j=j-gap)
			{
				a[j]=a[j-gap];
			}
			a[j]=temp;
		}
	}
	printf("sorted array=");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
