#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success/correct)
*/
int main(void)
{
for (char alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (char alpha = 'A'; alpha <= 'Z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
return (0);
}
