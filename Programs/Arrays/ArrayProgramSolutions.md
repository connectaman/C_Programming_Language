### Array Program Solutions

-----

1- C Program to Find Largest Element of an Array

```objectivec
    #include <stdio.h>
    int main()
    {
        int i, n;
        float arr[100];
        printf("Enter total number of elements(1 to 100): ");
        scanf("%d", &n);
        printf("\n");
        // Stores number entered by the user
        for(i = 0; i < n; ++i)
        {
           printf("Enter Number %d: ", i+1);
           scanf("%f", &arr[i]);
        }
        // Loop to store largest number to arr[0]
        for(i = 1; i < n; ++i)
        {
           // Change < to > if you want to find the smallest element
           if(arr[0] < arr[i])
               arr[0] = arr[i];
        }
        printf("Largest element = %.2f", arr[0]);
        return 0;
    }
```
Output
```
Enter total number of elements(1 to 100): 8

Enter Number 1: 23.4
Enter Number 2: -34.5
Enter Number 3: 50
Enter Number 4: 33.5
Enter Number 5: 55.5
Enter Number 6: 43.7
Enter Number 7: 5.7
Enter Number 8: -66.5
Largest element = 55.5
```

-----

2- C Program to Calculate Average Using Arrays

```objectivec
    #include <stdio.h>
    int main()
    {
        int n, i;
        float num[100], sum = 0.0, average;
        printf("Enter the numbers of elements: ");
        scanf("%d", &n);
        while (n > 100 || n <= 0)
        {
            printf("Error! number should in range of (1 to 100).\n");
            printf("Enter the number again: ");
            scanf("%d", &n);
        }
        for(i = 0; i < n; ++i)
        {
            printf("%d. Enter number: ", i+1);
            scanf("%f", &num[i]);
            sum += num[i];
        }
        average = sum / n;
        printf("Average = %.2f", average);
        return 0;
    }
```

Output

```
Enter the numbers of elements: 6
1. Enter number: 45.3
2. Enter number: 67.5
3. Enter number: -45.6
4. Enter number: 20.34
5. Enter number: 33
6. Enter number: 45.6
Average = 27.69
```

-------

3- Write a program in C to read n number of values in an array and display it in reverse order.

```objectivec
#include <stdio.h>

void main()
{
   int i,n,a[100];
   
       printf("\n\nRead n number of values in an array and display it in reverse order:\n");
       printf("------------------------------------------------------------------------\n");
   
   printf("Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf("Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }
      
   printf("\nThe values store into the array are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }
 
   printf("\n\nThe values store into the array in reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% 5d",a[i]);
	  }
   printf("\n\n");
} 

```
output
```
Read n number of values in an array and display it in reverse order:                                          
------------------------------------------------------------------------                                      
Input the number of elements to store in the array :3                                                         
Input 3 number of elements in the array :                                                                     
element - 0 : 2                                                                                               
element - 1 : 5                                                                                               
element - 2 : 7                                                                                               
                                                                                                              
The values store into the array are :                                                                         
    2    5    7                                                                                               
                                                                                                              
The values store into the array in reverse are :                                                              
    7    5    2
```
