//24-09-2024
#include <stdio.h>

int main() {
    int score = 45;
    
    char grade = (score >= 90) ? 'A' :(score >= 80) ? 'B' :(score >= 70) ? 'C' :(score >= 60) ? 'D' : 'F';
    
    printf("The grade is: %c\n", grade);
    
    return 0;
}