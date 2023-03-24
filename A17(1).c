#include<stdio.h>
int main()
{
    char str[10]="BHOPAL";
    int i;
    for(i=0;str[i];i++);
    printf("length of the string is %d",i);
    return 0;
}