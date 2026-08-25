#include<stdio.h>
void main()
{
	int a[]={71,8,5,3,1,2};
	int i,j,gap,temp;
	int n=6;
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
