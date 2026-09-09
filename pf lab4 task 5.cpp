#include <stdio.h>
int main() {
    int people;
    double total_weight;

    printf("Enter the number of people: ");
    scanf("%d", &people);
    printf("Enter total combined weight (in kg): ");
    scanf("%lf", &total_weight);

    
    if (total_weight > 1000.0 && people > 10) {
        printf("Denied entry: Exceeds both weight capacity and people limit.\n");
    } else if (total_weight > 1000.0) {
        printf("Needs to deny entry due to overweight.\n");
    } else if (people > 10) {
        printf("Needs to deny entry due to exceeding the people limit.\n");
    } else {
        printf("The elevator can operate normally.\n");
    }

    return 0;
}