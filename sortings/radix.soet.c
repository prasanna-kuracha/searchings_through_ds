#include<stdio.h>
int get_max(int *a,int n)
{
	int i,max;
	a[0]=max; //2
	for(i=0;i<n;i++) //2 3 4 
	{
		if(a[i]>a[0])
		{
			max=a[i];//4
		}
	}
}
/*int place(int *a,int n,int e)
{
   int i;
   for(i=0;i<n;i++)
   {
   	  int place =(a[i]/e%10)
   }
	
}*/
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//int e=1;
	//int place(a,n,e);
	int s=get_max(a,n);
	printf("%d ",s);
	
}
