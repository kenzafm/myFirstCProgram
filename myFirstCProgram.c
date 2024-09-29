#include <stdio.h>

void myFunction(int currentGrade, int finalWorth, int gradeWant); //Declaring Function

int main() {
    int currentGrade;
    printf("What is your current Grade(in %%)? : ");
    scanf("%i", &currentGrade);
    
    int finalWorth;
    printf("How much is your final worth(in %%)? : ");
    scanf("%i", &finalWorth);
    
    int gradeWant;
    printf("What grade do you want at least(in %%)? : ");
    scanf("%i", &gradeWant);
    
    myFunction(currentGrade, finalWorth, gradeWant); // Calling Function
    return 0;
}

void myFunction(int currentGrade, int finalWorth, int gradeWant) { // Defining Function
    float currentGradePercent = 100 - finalWorth;
    float two = currentGrade * (currentGradePercent / 100);
    float three = gradeWant - two;
    float four = three / finalWorth;
    float five = four * 100;
    printf("You need a grade of at least %.2f%%\n", five);
    printf("You Got This!");
}