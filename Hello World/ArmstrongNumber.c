#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int somedigit(int number)
{
    int digit = 0;
    while (number > 0)
    {
        number = number / 10;
        digit++;
    }
    return digit;
}

bool isArmstrong(int number)
{
    int res = 0;
    int copy = number;
    int digit = somedigit(copy);
    printf("The digit is %d \n", digit);
    do
    {
        res += pow(number % 10, digit);
        number = number / 10;
    } while (number > 0);
    return res == copy;
}
void main()
{
    printf("%i", isArmstrong(90));
}