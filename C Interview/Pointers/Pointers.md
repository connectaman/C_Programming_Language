## Pointers Questions

1. What will be the output of the C program?
```objectivec
#include<stdio.h>
int main(){
	int a = 130;
	char *ptr;
	ptr = (char *)&a;
	printf("%d ",*ptr);
	return 0;
}
```
Options
```
A. -126
B. Run Time Error
C. Garbage value
D. Compile Time Error
```
Answer 
```
Option: A
Explanation
Here a variable a holds the value 130 of integer datatypes, which is then type casted to char datatypes using pointer variable. As we know that a value 130 is exceeding the char range( -128 to 127), thus it loops through its range.
For Example
128 = -128
129 = -127
130 = -126
140 = -125 
```

-------

2. What will be the output of the C program?
```objectivec
#include<stdio.h>
int main(){
	int i = 3;
	int *j;
	int **k;
	j = &i;
	k = &j;
	k++;
	printf("%d ",**k);
	return 0;
}
```
Options
```
A. Linker Error
B. Run time error
C. Compilation Error
D. Garbage value 
```
Answer
```
Option: D
Explanation

Here j is the pointer variable which holds the address of another variable called i. When j is incremented, the address stored in j is incremented. As a result some garbage value will be displayed as we had not initialized anything to the address next to the address of a variable i.
```