#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A[6][3]={{123,456,9000},{456,789,5000},{789,888,6000},{336,558,10000},{775,666,12000},{566,221,7000}};
  int a,b,c,f,e;

  scanf("%d",&b);
  for(c=0;c<b;c++)
  {
      scanf("%d%d",&f,&e);

      int Z[2]={f,e};
      for(a=0;a<7;a++)
      {
        if(A[a][0]==Z[0]&&A[a][1]==Z[1])
            {
                printf("%d\n",A[a][2]);
                break;
            }
        if(a==6)
            {
                printf("error\n");
                break;
            }
      }
  }
}
