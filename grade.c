#include <stdio.h>

int main() {

    int marks;
    char grade;

    printf("Enter your marks:");
    scanf("%d", &marks);


    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' :
            (marks >= 50) ? 'E' : 'F';

    printf("Your grade is %c", grade);

    return 0;
}