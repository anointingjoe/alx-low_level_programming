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
