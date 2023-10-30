#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,d,e,f,g,h,i;
  int max=0;
  scanf("%d",&a);
  if(a>=1&&a<=10)
  {
      int A[a][a];
      for(b=0;b<a;b++)
      {
          for(c=0;c<a;c++)
          {
          scanf("%d",&A[b][c]);
          }
      }
      for(d=0;d<a;d++)
      {
          for(b=0;b<a;b++)
          {
              for(c=0;c<a;c++)
              {
                  if(A[b][c]>max)
                  {
                      max=A[b][c];
                      e=b;
                      f=c;
                  }
              }
          }
        for(int b=0;b<a;b++)
        {
         A[e][b]=0;
         A[b][f]=0;
        }
        printf("boy %d pair with girl %d\n",e+1,f+1);
        max=0;
      }
  }
  else
  {
      printf("fail");
  }
}

