include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,k;
    scanf("%d",&a);
    char ch;
    int sum=a;
    while((ch=getchar())!=’=’)
    {
        scanf("%d",&b);
        if(ch==’/’&&b==0)
        {
            puts(“ERROR”);
            return 0;
        }
        switch(ch)
        {
            case ‘+’:
                sum+=b;
                break;
            case’-’:
                sum-=b;
                break;
            case’’:
                sum=b;
                break;
            case’/’:
                sum/=b;
                break;
            default:
                
                puts("ERROR");
                return 0;
        }
    }
    printf("%d",sum);
    return 0;
}
