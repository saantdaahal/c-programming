#include <stdio.h>
int main() 
{
    //declaring variables
    char string1[100], string2[100], i;
    //taking input string from the user
    printf("Enter string 1 to be copied: ");
    //putting string in 1 variable
    fgets(string1, sizeof(string1), stdin);
    //Adding that string to another variable
    for (i = 0; string1[i] != '\0'; ++i) 
    {
        string2[i] = string1[i];
    }
    
    string2[i] = '\0';
    //printing output of string copied without strcpy
    printf ("Copied string 2 without strcpy(): %s", string2);
    return 0;
}