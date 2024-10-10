#include <stdio.h>

// void myFunction(int currentGrade, int finalWorth, int gradeWant); //Declaring Function

void myFunction(int currentGrade, int finalWorth, int gradeWant) { // Defining Function
    float currentGradePercent = 100 - finalWorth;
    float two = currentGrade * (currentGradePercent / 100);
    float three = gradeWant - two;
    float four = three / finalWorth;
    float five = four * 100;
    printf("You need a grade of at least %.2f%%\n", five);
    printf("You Got This!");
}

int main() {
    int currentGrade;
    printf("What is your current Grade(in %%)? : ");
    scanf("%i", &currentGrade);
    while (currentGrade < 0 || currentGrade > 100) {
        printf("Please enter a valid number between 0 and 100: ");
        scanf("%i", &currentGrade);
    }
    
    int finalWorth;
    printf("How much is your final worth(in %%)? : ");
    scanf("%i", &finalWorth);
    while (finalWorth < 0 || finalWorth > 100) {
        printf("Please enter a number between 0 and a 100: ");
        scanf("%i", &finalWorth);
    }
    
    int gradeWant;
    printf("What grade do you want at least(in %%)? : ");
    scanf("%i", &gradeWant);
    while (gradeWant < 0 || gradeWant > 100) {
        printf("Please enter a number between 0 and a 100: ");
        scanf("%i", &gradeWant);
    }
    
    myFunction(currentGrade, finalWorth, gradeWant); // Calling Function
    return 0;
}