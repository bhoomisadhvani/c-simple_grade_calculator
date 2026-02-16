


#include <stdio.h>

int main() {

    char grade;

    printf("Enter your grade:");
    scanf(" %c", &grade);

    if (grade == 'A' || grade=='a') {
        printf("Excellent work! You are eligible for the next level.");
    }
         else if (grade == 'B' || grade=='b') {
        printf("Well done. You are eligible for the next level.");
        }
        else if (grade == 'C' || grade=='c') {
        printf("Good job. You are eligible for the next level.");
        }
        else if (grade == 'D' || grade=='d') {
        printf("You are eligible for the next level.");
        }
        else if (grade == 'E' || grade=='e') {
        printf("You are eligible for the next level.");
        }
        else if(grade=='F' || grade=='f') {
        printf("please try next time");
        }
        else {
        printf("Invalid grade");
        }

    return 0;
}
