#include <stdio.h>
void main ()
{
    int arr[3][3],i,j;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing the elements ....\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
}

//Enter a[0][0]: 56
//Enter a[0][1]: 10
//Enter a[0][2]: 30
//Enter a[1][0]: 34
//Enter a[1][1]: 21
//Enter a[1][2]: 34
//
//Enter a[2][0]: 45
//Enter a[2][1]: 56
//Enter a[2][2]: 78
//
// printing the elements ....
//
//56      10      30
//34      21      34
//45      56      78