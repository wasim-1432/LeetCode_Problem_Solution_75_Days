#include<stdio.h>
#include<string.h>
char *MergeString(char *word1,char *word2);
int main()
{
    char word1[20]="abc",word2[20]="pqr";
    printf("%s",MergeString(word1,word2));
    printf("\n");
    return 0;
}
char * mergeAlternately(char * word1, char * word2){
    int i=0,j=0,k=0,l1,l2;
    l1=strlen(word1);
    l2=strlen(word2);
    char *temp;
    temp=(char*)malloc((l1+l2+1)*sizeof(char));
    while(i<l1 && j<l2)
    {
        temp[k++]=word1[i++];
        temp[k++]=word2[j++];
    }
    while(i<l1)
    {
        temp[k++]=word1[i++];
    }
    while(j<l2)
    {
        temp[k++]=word2[j++];
    }
    temp[k]='\0';
    return temp;
}