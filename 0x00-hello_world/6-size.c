#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char acharacter;
int ainteger;
long along;
long long alonglong;
float afloat;
printf("Size of a char:% lu byte(s)\n", sizeof(1));
printf("Size ofan int:% lu byte(s)\n", sizeof(4));
printf("Size of a long int: % lu byte(s)\n", sizeof(8));
printf("Size of a long long int: % lu byte(s)\n", sizeof(8));
printf("Size of a float : % lu byte(s)\n", sizeof(4));
return (0);
}
