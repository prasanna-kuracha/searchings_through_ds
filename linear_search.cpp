//iteration
#include<stdio.h>
int main()
{
	int n,i,l=0,h=n-1,se,c,mid;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(a[mid]=se)
		{
		  c=1;
		  break;	
		}
		else if(se>a[mid])
		{
			l=mid+1;
		}
	//	else if(se<a[mid])
	else
		{
			h=mid-1;
		}
	}
		
	if(c==1)
	{
	printf("found at %d",mid);
    }
    else
    {
    printf(" not found ");
    
	}

}
/*#include<stdio.h>
int binary_search(int *a,int n,int se)
{
	int l=0,h=n-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(se==a[mid]) return mid;
		else if(se>a[mid]) l=mid+1;
		else if(se<a[mid]) h=mid-1;
	}
	return -1;
}
int main()
{
	int n,i,se,mid;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	int res= binary_search(a,n,se);
	if(res==-1)
	{
		printf("Element is not found");
	}
	else
	{
		printf("element is found %d index",res);
	}
	
}*/
