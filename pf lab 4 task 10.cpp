#include <stdio.h>

int main() {
    int heart_rate;
    double temperature;

    printf("Enter patient's heart rate (bpm): ");
    scanf("%d", &heart_rate);
    printf("Enter patient's body temperature (C): ");
    scanf("%lf", &temperature);

    if (heart_rate > 120 || temperature > 39.0) {
        printf("Triage Level: Critical - Immediate Attention.\n");
    } 
    else if ((heart_rate >= 100 && heart_rate <= 120) && (temperature >= 37.5 && temperature <= 39.0)) {
        printf("Triage Level: Urgent.\n");
    } 
    else {
        printf("Triage Level: Normal - Wait in Queue.\n");
    }

    return 0;
}