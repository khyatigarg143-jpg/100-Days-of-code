#include <stdio.h>

int main()
{
    int num, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    digits = 0;
    int temp = num;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    power = 1;
    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = num / power;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}
