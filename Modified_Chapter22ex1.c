// Example program #2 from Chapter 23 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter23ex2.c

/* This program searches a sorted list of customer IDs in order to
get credit totals */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


// C does not support function overloading
void intSwap (int * p_x, int * p_y)
{
    int temp = *p_x;
    *p_x = *p_y;
    *p_y = temp;
}

void floatSwap (float * p_x, float * p_y)
{
    float temp = *p_x;
    *p_x = *p_y;
    *p_y = temp;
}

void bubbleSort (int size, int customerID[], float custBalance[])
{
    int i;
    int j;
    bool didSwap = false;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (customerID[j] > customerID[j + 1])
            {
                intSwap(&customerID[j], &customerID[j + 1]);
                floatSwap(&custBalance[j], &custBalance[j + 1]);
                didSwap = true;
            }
        }
        
        // Checks if the array is already sorted
        if (didSwap == false)
        {
            break;
        }
    }
}


main()
{

    // Counters
    int i;

    // Customer Arrays
    int size = 50;
    int customerID[size];
    float custBalance[size];

    // Random number generation
    time_t t;
    srand( time(&t) );

    // Customer search
    int id;
    bool found = false;
    char repeat = 'Y';

    for (i = 0; i < size; i++)
    {
        // Populate customer ID from 1 to 1000
        customerID[i] = (rand() % 1000) + 1;

        // Populate random customer balance from 1.00 to 500.00
        custBalance[i] = ((float) rand()) / ((float) (RAND_MAX/500));

        printf("%d - %.2f\n", customerID[i], custBalance[i]);
    }
    
    //Sort Array
    bubbleSort(size, customerID, custBalance);

    printf("\n\n\n");

    for (i = 0; i < size; i++)
    {
        printf("%d - %.2f\n", customerID[i], custBalance[i]);
    }

    // Customer Finder
    while (toupper(repeat) == 'Y')
    {
        printf("\n\n\n*** Customer Balance Lookup ***\n");
        printf("What customer number do you need to check? ");
        scanf(" %d", &id);

        found = false;
        
        //Finds customer given ID
        for (i = 0; i < size; i++)
        {
            if (id == customerID[i])
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            if (custBalance[i] > 100.00)
            {
                printf("\n** That customer's balance is $%.2f.\n", custBalance[i]);
                printf(" No additional credit.\n");
            }

            else
            {
                printf("\n** The customer's credit is good! \n");
            }
        }

        else
        {
            printf("** You must have typed an incorrect customer ID.");
            printf("\n ID %3d was not found in list.\n", id);
        }

        printf("\n Would you like to search again? (Y/N) ");
        scanf(" %c", &repeat);
    }

    return 0;

}
