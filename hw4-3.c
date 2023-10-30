#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 0;
    int t[100][2];


    while (scanf("%d %d", &t[a][0], &t[a][1]) != EOF)
{
    a++;
}
     for (int i = 0; i < a - 1; i++)
{
        for (int j = i + 1; j < a; j++)
{
            if (t[i][1] > t[j][1])
{
            int bs = t[i][0];
            int bd = t[i][1];
            t[i][0] = t[j][0];
            t[i][1] = t[j][1];
            t[j][0] = bs;
            t[j][1] = bd;
}
}
}


    int cars = 1;
    int back = t[0][1];
    int nn[100];


    for (int i = 0; i < a; i++)
{
        nn[i] = 1;
}


    for (int i = 1; i < a; i++)
{
    if (t[i][0] >= back)
{
        back = t[i][1];

}
    else
{
        cars++;
        nn[i] = cars;
}
}


    printf("%d\n", cars);
    for (int i = 1; i <= cars; i++) {
        printf("Driver %d's schedule is", i);
    for (int j = 0; j < a; j++)
{
    if (nn[j] == i)
{
    printf(" %d %d", t[j][0], t[j][1]);
}
}
    printf("\n");
}
}

