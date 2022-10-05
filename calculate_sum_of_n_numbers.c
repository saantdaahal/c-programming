#include <stdio.h>  
 
void main()  
{      int no, i, sum = 0; //declaring variables  
    printf(" Enter a positive number: ");  
    scanf("%d", &no); // taking any positive number  

    for (i = 0; i <= no; i++)// traverse until the condition remains true.  
    {  
        sum +=i; //adding value in each iteration
    }  
    // display the sum of number  
    printf("\n Sum of the given %d no is: %d", no,
    sum);
}