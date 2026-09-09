#include <stdio.h>

int main() {
    float entry_test, fsc_percentage, combined_score;

    
    printf("Enter Entry Test score (out of 100): ");
    scanf("%f", &entry_test);
    printf("Enter FSc percentage: ");
    scanf("%f", &fsc_percentage);

    
    combined_score = (0.5 * entry_test) + (0.5 * fsc_percentage);
    printf("Combined Score: %.2f\n", combined_score);

    
    if (combined_score >= 80) {
        printf("Admission Outcome: Computer Science\n");
    } 
    else if (combined_score >= 65) { 
        printf("Admission Outcome: Software Engineering\n");
    } 
    else if (combined_score >= 50) { 
        printf("Admission Outcome: Information Technology\n");
    } 
    else { 
        printf("Admission Outcome: Rejected\n");
    }

    return 0;
}
