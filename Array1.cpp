#include<stdio.h>
int main()
{
	int A[20];int n,i;short max_index,min_index;
	int min,max;
	printf("Enter length of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	max=0;min=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		{
		
			max=A[i];
			max_index=i;
		}
		else if(A[i]<min)
		{
		
			min=A[i];
			min_index=i;
		}
	}
	int t=A[min_index];
	A[min_index]=A[max_index];
	A[max_index]=t;
	printf("Array after swap \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	
	
	return 0;
}
