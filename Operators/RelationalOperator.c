// Working of relational operators
#include <stdio.h>
int main()
{
    int a = 5, b = 5, c = 10;
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);
    return 0;
}


//5 == 5 is 1
//5 == 10 is 0
//5 > 5 is 0
//5 > 10 is 0
//5 < 5 is 0
//5 < 10 is 1
//5 != 5 is 0
//5 != 10 is 1
//5 >= 5 is 1
//5 >= 10 is 0
//5 <= 5 is 1
//5 <= 10 is 1