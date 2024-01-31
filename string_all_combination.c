/* Program to print all the possible combinations of given string
 *
 * Enter the string:abc
The combinations are:abc
acb
bac
bca
cba
cab
 *
 * Enter the string:121
Enter distinct char */
#include<stdio.h>
#include<string.h>

void comb(char *str,int start,int end);
void swap(char *x,char*y);
int main()
{
    int i,j;
    char str[20];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int length=strlen(str);
    
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(str[i]==str[j])
            {
                printf("Enter distinct char\n");
                return 1;
            }
        }
        
    }

        printf("The combinations are:");
        comb(str,0,length-1);
    return 0;
}
void comb(char *str,int start,int end)
{
    int i,j;
    if(start == end)
    {
        printf("%s\n",str);
        return;
    }
    for(i=start;i<=end;i++)
    {
        for(j=i;j<i;j++)
        {
            if(str[start] == str[end])
            {
                return;
            }
        }
        swap(&str[start],&str[i]);
        comb(str,start+1,end);
        swap(&str[start],&str[i]);
    }
}
void swap(char *x,char*y)
{
    char temp = *x;
    *x=*y;
    *y=temp;
}
