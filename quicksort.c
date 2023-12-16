#include<stdio.h>
int quicksort(int a[],int lb,int ub)
{
	if(lb<ub){
	
	int loc=partition(a,lb,ub);
	quicksort(a,lb,loc-1);
	quicksort(a,loc+1,ub);
	}
}
int partition(int a[],int lb,int ub)
{
	int pivot=a[lb],start=lb,end=ub,c;
	
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		end--;
		if(start<end)
		{
			c=a[start];
			a[start]=a[end];
			a[end]=c;
		}
	}
	c=a[end];
	a[end]=a[lb];
	a[lb]=c;
	return end;
}
int main(){
	int a[30],n,i;
	printf("enter size of an array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("array after sorting \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
