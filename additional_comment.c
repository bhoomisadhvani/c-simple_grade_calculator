#include <stdio.h>

int main() {

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch(marks / 10) {

        case 10:
        case 9:
            printf("Your grade is A. Excellent work!");
            break;

        case 8:
            printf("Your grade is B. Good job");
            break;

        case 7:
            printf("Your grade is C. Good");
            break;

        case 6:
            printf("Your grade is D. You passed, but you could more better!");
            break;

        case 5:
            printf("Your grade is E. You need improvement");
            break;

        default:
            printf("Your grade is F you failed");
    }

    return 0;
}