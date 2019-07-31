##  Solution for the Control Problems

-------

1- Program to Check Even or Odd

```objectivec
    #include <stdio.h>
    int main()
    {
        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);
        // True if the number is perfectly divisible by 2
        if(number % 2 == 0)
            printf("%d is even.", number);
        else
            printf("%d is odd.", number);
        return 0;
    }
```

Output
```objectivec
Enter an integer: -7
-7 is odd.
```

---------

2- Program to Check Vowel or consonant

```objectivec
    #include <stdio.h>
    int main()
    {
        char c;
        int isLowercaseVowel, isUppercaseVowel;
        printf("Enter an alphabet: ");
        scanf("%c",&c);
        // evaluates to 1 (true) if c is a lowercase vowel
        isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        // evaluates to 1 (true) if c is an uppercase vowel
        isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
        if (isLowercaseVowel || isUppercaseVowel)
            printf("%c is a vowel.", c);
        else
            printf("%c is a consonant.", c);
        return 0;
    }
```

Output 
```
Enter an alphabet: G
G is a consonant.
```

-------

3- C Program to Find the Largest Number Among Three Numbers

```objectivec
    #include <stdio.h>
    int main()
    {
        double n1, n2, n3;
        printf("Enter three numbers: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        if( n1>=n2 && n1>=n3)
            printf("%.2lf is the largest number.", n1);
        else if (n2>=n1 && n2>=n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.", n3);
        return 0;
    }
```
Output
```

```
------

4 -C Program to Check Leap Year

```objectivec
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);
    
    return 0;
}
```

Output
```
Enter a year: 2012
2012 is a leap year.
```

------

5- C Program to Check Whether a Number is Positive or Negative

```objectivec
    #include <stdio.h>
    int main()
    {
        double number;
        printf("Enter a number: ");
        scanf("%lf", &number);
        if (number <= 0.0)
        {
            if (number == 0.0)
                printf("You entered 0.");
            else
                printf("You entered a negative number.");
        }
        else
            printf("You entered a positive number.");
        return 0;
    }
```
Output
```
Enter a number: 12.3
You entered a positive number.
```

-----------

