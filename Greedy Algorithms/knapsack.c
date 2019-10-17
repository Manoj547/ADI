// Fractional KNAPSACK 

#include<stdio.h>

struct Item
{
    int value , unit;
};

void sort(struct Item t[] , int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( ((double)t[i].value/t[i].unit) < ((double)t[j].value/t[j].unit) )
            {
                struct Item a = t[i];
                t[i]=t[j];
                t[j]=a;
            }
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d %d\n",t[i].value,t[i].unit);
    // }
}

int knapsack(struct Item t[] , int k_unit , int n)
{
    if(n==0)
        return 0;
    
    int current_unit=0;
    int final_value=0;
    
    sort(t,n);
    for(int i=0;i<n;i++)
    {
        if(current_unit + t[i].unit<=k_unit)
        {
            current_unit+=t[i].unit;
            final_value+=t[i].value;
        }
        else
        {
            int rem=k_unit-current_unit;
            final_value = final_value + t[i].value*((double)rem/t[i].unit);
            break;
        }
    }
    return final_value;
}

int main()
{
    int n , k_unit;
   // int arr[];
    scanf("%d%d",&n,&k_unit);
    struct Item t[10];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&t[i].value , &t[i].unit);
    }
    printf("%d",knapsack(t, k_unit , n));
}


// test case :-

// 3
// 50
// 100
// 20
// 60
// 10
// 120
// 30