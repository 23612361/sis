#include <stdio.h>

int main()
{
    int x, y;
    printf("xを入力してください");
    scanf("%d", &x);
    printf("yを入力してください");
    scanf("%d", &y);
    
    if(x > y)
    {
        printf("y < x\n");
    }
    else if(x < y)
    {
        printf("x < y\n");
    }
    else
    {
        printf("x = y\n");
    }
    return 0;
}
