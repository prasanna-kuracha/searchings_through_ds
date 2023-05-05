//insertion sort by intern
/*#include<stdio.h>
int insertion (int *a,int n)
{
	int j,i;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j] > key) 
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}	
		}
		a[j+1]=key;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}*/
//insertion sort by sir
/*#include<stdio.h>
int insertion (int *a,int n)
{
	int j,i;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;;j--)  //here we doesn't give any  condition ,it means j value takes upto any number like 0,-1,-2...
		{
			if(a[j] < key || j==-1) 
			{
				a[j+1]=key;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}*/

