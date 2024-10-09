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
