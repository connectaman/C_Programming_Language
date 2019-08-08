### Solution 

-------

1- C Program to Calculate the Sum of Natural Numbers

```objectivec
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}
```

Output 
```
Enter a positive integer: 100
Sum = 5050
```

------

2- C Program to Find Factorial of a Number

```objectivec
    #include <stdio.h>
    int main()
    {
        int n, i;
        int factorial = 1;
        printf("Enter an integer: ");
        scanf("%d",&n);
        // show error if the user enters a negative integer
        if (n < 0)
            printf("Error! Factorial of a negative number doesn't exist.");
        else
        {
            for(i=1; i<=n; ++i)
            {
                factorial *= i;              // factorial = factorial*i;
            }
            printf("Factorial of %d = %d", n, factorial);
        }
        return 0;
    }
```
Output
```
Enter an integer: 10
Factorial of 10 = 3628800
```

------

3- C Program to Generate Multiplication Table

```objectivec
    #include <stdio.h>
    int main()
    {
        int n, i;
        printf("Enter an integer: ");
        scanf("%d",&n);
        for(i=1; i<=10; ++i)
        {
            printf("%d * %d = %d \n", n, i, n*i);
        }
        
        return 0;
    }
```

Output

```objectivec
Enter an integer: 9
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90
```

-------


4- C Program to Display Fibonacci Sequence

```objectivec
    #include <stdio.h>
    int main()
    {
        int i, n, t1 = 0, t2 = 1, nextTerm;
        printf("Enter the number of terms: ");
        scanf("%d", &n);
        printf("Fibonacci Series: ");
        for (i = 1; i <= n; ++i)
        {
            printf("%d, ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        return 0;
    }
```
Output
```
Enter the number of terms: 10
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
```

---------

5- C Program to Display Characters from A to Z Using Loop

```objectivec
    #include <stdio.h>
    int main()
    {
        char c;
        for(c = 'A'; c <= 'Z'; ++c)
           printf("%c ", c);
        
        return 0;
    }
```
Output
```
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
```

---

6- C Program to Count Number of Digits in an Integer

```objectivec
    #include <stdio.h>
    int main()
    {
        long long n;
        int count = 0;
        printf("Enter an integer: ");
        scanf("%lld", &n);
        while(n != 0)
        {
            // n = n/10
            n /= 10;
            ++count;
        }
        printf("Number of digits: %d", count);
    }
```
Output
```
Enter an integer: 3452
Number of digits: 4
```

------

7- C Program to Check Whether a Number is Palindrome or Not

```objectivec
    #include <stdio.h>
    int main()
    {
        int n, reversedInteger = 0, remainder, originalInteger;
        printf("Enter an integer: ");
        scanf("%d", &n);
        originalInteger = n;
        // reversed integer is stored in variable 
        while( n!=0 )
        {
            remainder = n%10;
            reversedInteger = reversedInteger*10 + remainder;
            n =n / 10;
        }
        // palindrome if orignalInteger and reversedInteger are equal
        if (originalInteger == reversedInteger)
            printf("%d is a palindrome.", originalInteger);
        else
            printf("%d is not a palindrome.", originalInteger);
        
        return 0;
    }
```

Output
```
Enter an integer: 1001
1001 is a palindrome.
```

----

8- Program to print half pyramid using *

```objectivec
    #include <stdio.h>
    int main()
    {
        int i, j, rows;
        printf("Enter number of rows: ");
        scanf("%d",&rows);
        for(i=1; i<=rows; ++i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }
```
Output
```
*
* *
* * *
* * * *
* * * * *
```

-----

9- Program to print half pyramid a using numbers
```objectivec
    #include <stdio.h>
    int main()
    {
        int i, j, rows;
        printf("Enter number of rows: ");
        scanf("%d",&rows);
        for(i=1; i<=rows; ++i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        return 0;
    }
```
Output
```
The Expected Output
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

--------

10- Programs to print inverted half pyramid using * and numbers

```objectivec
    #include <stdio.h>
    int main()
    {
        int i, j, rows;
        printf("Enter number of rows: ");
        scanf("%d",&rows);
        for(i=rows; i>=1; --i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("* ");
            }
            printf("\n");
        }
        
        return 0;
    }
```
Output

```objectivec
* * * * *
* * * *
* * * 
* *
*
```

-----

11- Inverted half pyramid using numbers

```objectivec
    #include <stdio.h>
    int main()
    {
        int i, j, rows;
        printf("Enter number of rows: ");
        scanf("%d",&rows);
        for(i=rows; i>=1; --i)
        {
            for(j=1; j<=i; ++j)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        return 0;
    }
```
Output
```
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
```

----

12- Create a C program, which calculates the triangualr number of the user's request, read from the keyboard using scanf(). A triangular number is the sum of the preceeding numbers, so the traingular number 7 has the value of 7+6+5+4+3+2+1 (same as a factorial in mathematics, for example , factorial of 7 --- !7).


```objectivec

```
Output

```

```