#include<stdio.h>
int main()
{
    char a[]="prateek";
    char b='e';
    int i=0,count=0;

    while(a[i]!='\0')
    {
        
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("%s",a);
    return 0;
}