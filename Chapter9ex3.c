// Example program #3 from Chapter 9 of Absolute Beginner's Guide to
// C, 3rd Edition
// File Chapter9ex3.c

#include <stdio.h>

main()
{
    
    // declare grade variables
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;
    
    grade1 = grade3 = 88;
    grade2 = 79;
    
    printf("What did you get on the fourth test?");
    scanf(" %d", &grade4);
    
    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    
    printf("Your average is %0.1f.\n", averageGrade);
    
    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);
    printf("Your grade is %.1f points lower than the top grade in the class (95)\n", gradeDelta)
    printf("You are %.1f percent behind that grade!\n\n\n", percentDiff);
    
    return 0;
    
}