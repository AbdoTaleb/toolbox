#include <stdio.h>
#include "verktyg.h"

void skriv_fizzbuzz(int fran, int till) 
{
    for (int i = fran; i <= till; i++) 
    {
        if(i % 3 == 0)
        {
            if (i % 5 == 0)
            {
                printf("FizzBuzz\n");
                continue;
            }
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }
}

void fizzbuzz_sammanfattning(int fran, int till, char *sammanfattning)
{
    int fizzes = 0;
    int buzzes = 0;
    int fizzbuzzes = 0;

    for (int i = fran; i <= till; i++) 
    {
        if(i % 3 == 0)
        {
            if (i % 5 == 0)
            {
                fizzbuzzes++;
                continue;
            }
            fizzes++;
        }
        else if (i % 5 == 0)
        {
            buzzes++;
        }
    }
    
    sprintf(sammanfattning, "Fizz: %d, Buzz: %d, FizzBuzz: %d", fizzes, buzzes, fizzbuzzes);
}