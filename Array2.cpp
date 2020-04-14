#include<stdio.h>
int main(){
	int A[20];
	int n,p,t;
	int i,j;
	printf("Enter length of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[p])
				p=j;	
		}
		t=A[p];
		A[p]=A[i];
		A[i]=t;
	}
	printf("Second largest number in the array is %d",A[n-2]);
	return 0;
}

