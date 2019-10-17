// Binary search (RECURSION METHOD)

#include<stdio.h>

int binarySearch(int arr[],int l,int r,int no)
{
	if(l<=r)
	{
		int mid = l + (r-l)/2;
		if(arr[mid]==no)
			return mid;
		if(arr[mid]>no)
			return binarySearch(arr,l,mid-1,no);
		return binarySearch(arr,mid+1,r,no);
	}
	return -1;
}

int main()
{
	int n,no;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the no to found");
		scanf("%d",&no);

	printf("%d",binarySearch(arr,0,n-1,no));
}
