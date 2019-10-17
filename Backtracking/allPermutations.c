//  Print all permutations of a given string

#include <stdio.h> 
#include <string.h> 
  

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void allPermutations(char *str, int l, int r)
{
   if(l==r)
        printf("%s\n", str);
   else
   {
       for(int i=l;i<=r;i++)
       {
            swap(str+l , str+i);
            allPermutations(str, l+1, r);
            swap(str+l , str+i);
       }
   }
}


int main()
{
    char str[10];
    scanf("%s",&str);
    int n=strlen(str);
    allPermutations(str, 0, n-1);
    return 0;
}