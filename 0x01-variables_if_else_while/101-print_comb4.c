#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Task 11 program prints different combination of three digits.
 *
 *Return: 0
 **/
int main(void)
{
int i, j, k;
int arr[3];
putchar("Enter the first number : ");
scanf("%d", &arr[0]);
putchar("Enter the second number : ");
scanf("%d", &arr[1]);
putchar("Enter the third number : ");
scanf("%d", &arr[2]);
for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
for (k = 0; k < 3; k++)
{
if (i != j && j != k && k != i)
{
putchar("[%d %d %d]\n", arr[i], arr[j], arr[k]);
}
}
}
}
}
