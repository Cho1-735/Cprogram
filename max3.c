int max(int a, int b, int c)
{
    if (a>b && a>c)
    {
        return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
#include <stdio.h>
 int main()
 {
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=max(a,b,c);
    printf("Max=%d\n",d);
    return 0;
 }