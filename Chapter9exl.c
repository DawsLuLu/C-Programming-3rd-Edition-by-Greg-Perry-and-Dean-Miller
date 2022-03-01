// Example program #1 from Chapter 9 of
// Absolute Beginner's Guide to C, 3rd Edition
// File Chapter9exl.c

// This is a sample program that demonstrates math operators and the different types of division

#include <stdio.h>

main()
{
    // Two sets of equivalent variables, with one set
    // floating-point and theother integer
    
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;
    
    int x = 19;
    int y = 5;
    int intAnswer;
    
    // Using two float variables creates an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);   
    
    // Using two integer variables in a float creates 3 as it doesn't round up
    floatAnswer = x / y;
    printf("%d divided by %d equals %0.1f\n", x, y, floatAnswer);
    
    // This is also 3
    intAnswer = x / y;
    printf("%d divided by %d equals %d\n", x, y, intAnswer);
    
    // This calculates the remainder of 4
    intAnswer = x % y;
    printf("%d modulus (i.e remainder of) %d equals %d", x, y, intAnswer);
    
    return 0;
    
}