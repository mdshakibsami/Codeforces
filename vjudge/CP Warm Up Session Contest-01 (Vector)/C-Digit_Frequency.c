#include<stdio.h>
int main()
{

    char str[1000];
    scanf("%s",str);
    char number[]={"0123456789"};
    int len = strlen(str);

    for(int i=0;i<10;i++)
    {
        int count=0;
        for(int j=0;j<len;j++)
        {
            if(number[i]==str[j])
            {
            count++;
            } 
        }
        printf("%d ",count);
    }
}