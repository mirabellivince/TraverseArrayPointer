/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int count(char string[],char target)
{
    char *str = string;
    int counter = 0;
    
    
    while (*str != '\0')
        {
            if (*str == target)
            {
                counter++;
            }
            str++;
        }
    
    
    return counter;
    
    
    
}



int main()
{
    printf("Hello World\n");
    char tinky[] = "I love coding!";
    int thing = count(tinky,'o');
    printf("%d",thing);

    return 0;
}