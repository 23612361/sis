#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
    printf("double型の最大値:%g\n", DBL_MAX);
    printf("double型の最小値:%g\n", DBL_MIN);
    printf("double型の精度:%d\n", DBL_DIG);
    printf("int型の最大値:%d\n", INT_MAX);
    printf("int型の最小値:%d\n", INT_MIN);
    printf("longdouble_max:%ld\n", LDBL_MAX);
    printf("longdouble_min:%ld\n", LDBL_MIN);
    printf("longdouble_dig:%ld\n", LDBL_DIG);
    return 0;
}