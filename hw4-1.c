#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c;
    scanf("%d",&n);
    if(n>=1&&n<=50)
    {
        int i,c;
        int a[50];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

            for(c=2;c<a[i];c++)
            {
                if(a[i]%c==0)
                {
                    printf("NO ");
                    break;
                }
            }
                if(c==a[i])
                {
                    printf("YES ");
                }
            }

    }
    else
    {
        printf("fail");
    }

}

