// Example program #2 from Chapter 9 of
// Absolute Beginner's Guide to C, 3rd Edition
// File Chapter9ex2.c

// This program asks the user for a number of tures and price per
// tire. It then calculates a total price, adding sales tax

// If you find you use a sales tax rate that may change, use #define 
// to set it in one place

#include <stdio.h>
#define SALESTAX 0.07

main()
{
    // Variable for the number of tires purchased, price,
    // a before-tax total and a total cost
    // with tax
    
    int numTires;
    float tirePrice, beforeTax, netSales;
    
    // Get the number of tires purchased and price per tire
    printf("How many tires did you purchase? ");
    scanf(" %d", &numTires);
    printf("What was the cost per tire(enter in $XX.XX format)? ");
    scanf(" $%f", &tirePrice);
    
    // Compute the price
    
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);
    
    printf("You spent $%0.2f on your tires\n\n\n", tirePrice);
    
    // Debug - prints out numTires, tirePrice, beforeTax and netSales
    // printf("\n%d\n%.2f\n%.2f\n%.2f", numTires, tirePrice, beforeTax, netSales);
    
    return 0;
    
}