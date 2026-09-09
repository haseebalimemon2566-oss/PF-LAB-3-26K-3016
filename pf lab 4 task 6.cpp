#include <stdio.h>

int main() {
    int plan_choice, minutes_used = 0;
    double total_bill = 0.0;

    printf("Enter plan choice (1-4): ");
    scanf("%d", &plan_choice);
    
    printf("Enter minutes used: ");
    scanf("%d", &minutes_used);

    switch (plan_choice) {
        case 1:
            if (minutes_used > 1000) {
                total_bill = 500 + (minutes_used - 1000) * 2;
            } else {
                total_bill = 500;
            }
            break;
        case 2:
            if (minutes_used > 2000) {
                total_bill = 800 + (minutes_used - 2000) * 2;
            } else {
                total_bill = 800;
            }
            break;
        case 3:
            total_bill = 1200;
            break;
        case 4:
            total_bill = minutes_used * 1.0;
            break;
        default:
            printf("Invalid plan choice!\n");
            return 1;
    }

    printf("Total Bill: Rs. %.2f\n", total_bill);
    return 0;
	}