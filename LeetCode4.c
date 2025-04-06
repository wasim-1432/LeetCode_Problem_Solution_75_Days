#include<stdio.h>
#include<string.h>
char* toLowerCase(char* s);
int main()
{
    char str[]="Wasim";
    printf("%s",toLowerCase(str));
    printf("\n");
    return 0;
}
char* toLowerCase(char* s)
{
    int i,l;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    return s;
}