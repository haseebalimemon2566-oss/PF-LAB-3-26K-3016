#include <stdio.h>

int main() {
    int membership_type, time_slot;
    double base_rate = 0.0, final_fee = 0.0;

    printf("Enter membership type (1 = Student, 2 = Regular, 3 = Senior Citizen): ");
    scanf("%d", &membership_type);
    printf("Enter time slot choice (1 = Morning, 2 = Evening): ");
    scanf("%d", &time_slot);

    
    switch (membership_type) {
        case 1:
            base_rate = 2000.0;
            break;
        case 2:
            base_rate = 3500.0;
            break;
        case 3:
            base_rate = 2500.0;
            break;
        default:
            printf("Error: Invalid membership type.\n");
            return 0;
    }
    switch (time_slot) {
        case 1: 
            final_fee = base_rate * (1.0 - 0.15);
            break;
        case 2: 
            final_fee = base_rate;
            break;
        default:
            printf("Error: Invalid time slot choice.\n");
            return 0;
    }

    printf("Final monthly fee: Rs. %.2f\n", final_fee);
    return 0;
}

