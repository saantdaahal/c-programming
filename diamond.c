#include <stdio.h>  
int main()  
{  
    // declaring the local variables  
    int i, j, r, k;  
    printf (" Enter a number of rows for the shape: \n ");  
    scanf("%d", &r);  
    int space = r-1, num=1;  
    printf("\n");  
    //first for loop for lines creation parent for loop
    for (i = 1; i <= r; i++)  
    {  
        //child for loop for printing the blank spaces
        for (j = 1; j <= space; j++)   
        {  
            printf(" ");   
        }  
        //for loop to print the * diamond pattern
        for ( k= 1; k <= num; k++)  
        {  
            printf("$");  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }     
    return(0);     
}  