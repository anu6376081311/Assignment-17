#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i;
    printf("Enter String: ");
    gets(s1);
    printf("\nStrings before copying:\n\nString1 = \"%s\", String2=\"%s\"\n",s1,s2);
    printf("--------------------------------------------------------\n");
    for(i=0; s1[i] != '\0';i++)
    {
        s2[i] = s1[i];
    }
    printf("Strings after copying:\n\nString1=\"%s\", String2=\"%s\"\n",s1,s2);
    return 0;
}