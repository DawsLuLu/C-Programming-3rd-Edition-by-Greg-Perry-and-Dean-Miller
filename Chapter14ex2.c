// Example program #2 from Chapter 14 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter14ex2.c

/* This program will multiply two numbers and display the result for
as long as the user wants. Answering 'N' will break the loop. */

#include <stdio.h>

main()
{
        float num1, num2, result;
        char choice = 'Y';

        while(choice == 'Y'){

            printf("Enter your first number to multiply: ");
            scanf(" %f", &num1);

            printf("Enter your second number to multiply: ");
            scanf (" %f", &num2);

            result = num1 * num2;
            printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);

            printf("Fo you want to enter another pair of numbers to multiply (Y/N): ");
            scanf(" %c", &choice);

            choice = toupper(choice);

        }

        return 0;
}
