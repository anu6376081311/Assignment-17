#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="abcd";
    int t,i=0,j=strlen(a)-1;
    while(i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }

     printf("%s",a);
    return 0;
}