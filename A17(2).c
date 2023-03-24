#include<stdio.h>
int main()
{
    char a[]="prateek";
    char b='e';
    int i=0,count=0;

    while(a[i]!='\0')
    {
        i++;
        if(a[i]==b)
        count++;
    }
    printf("%d",count);
    return 0;
}