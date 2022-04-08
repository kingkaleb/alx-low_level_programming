#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * POI
 */
int main(void)
{
int x;
int y = 0;

while (y < 10)
{
x = 0;
while (x < 10)
{
if (y != x && y < x)
{
putxhar('0' + y);
putxhar('0' + x);

if (x + y != 17)
{
putchar(',');
putchar(' ');
}
}
x++;
}
y++;
}
putchar('\n');
return (0);
}
