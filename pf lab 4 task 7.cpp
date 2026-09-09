#include <stdio.h>

int main() {
    int policy_active, vehicle_age;
    double claim_amount, approved_amount = 0.0;

    printf("Is policy active? (1 for Yes, 0 for No): ");
    scanf("%d", &policy_active);
    printf("Enter vehicle age (in years): ");
    scanf("%d", &vehicle_age);
    printf("Enter claim amount: Rs. ");
    scanf("%lf", &claim_amount);

    if (policy_active == 1 && claim_amount <= 500000) {
        if (vehicle_age < 10) {
            approved_amount = claim_amount;
            printf("Claim Approved. Approved Amount: Rs. %.2f\n", approved_amount);
        } else if (vehicle_age >= 10 && vehicle_age <= 15) {
            approved_amount = claim_amount * 0.50;
            printf("Claim Approved (50%%). Approved Amount: Rs. %.2f\n", approved_amount);
        } else {
            printf("Claim Rejected: Vehicle is older than 15 years.\n");
        }
    } else {
        printf("Claim Rejected: Inactive policy or claim amount exceeds Rs. 500,000.\n");
    }

    return 0;
}