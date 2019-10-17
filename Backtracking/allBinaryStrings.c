//  Generate all Binary strings of length n 

#include <stdio.h>

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void allBinaryStrings(int n , int arr[],int i)
{
    if(i==n)
    {
        printArray(arr,n);
        return ;
    }
    
    arr[i]=0;
    allBinaryStrings(n,arr,i+1);
    arr[i]=1;
    allBinaryStrings(n,arr,i+1);
}

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	allBinaryStrings(n,arr,0);
	return 0;
}

// Test case

// 2

// Output
// 00
// 01
// 10
// 11