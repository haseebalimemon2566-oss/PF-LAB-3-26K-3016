#include <stdio.h>

int main() {
    double bill_amount, final_payable;
    int hour, is_member;
    int total_discount = 0;

    printf("Enter total bill amount: Rs. ");
    scanf("%lf", &bill_amount);
    printf("Enter hour of visit (24-hour format): ");
    scanf("%d", &hour);
    printf("Is the customer a member? (1 for Yes, 0 for No): ");
    scanf("%d", &is_member);

    
    if (hour >= 15 && hour <= 17) {
        total_discount += 20;
    }
    
    
    if (is_member == 1) {
        total_discount += 10;
    }

    
    if (total_discount > 25) {
        total_discount = 25;
    }

    final_payable = bill_amount - (bill_amount * total_discount / 100.0);

    printf("Applied Discount: %d%%\n", total_discount);
    printf("Final Payable Bill: Rs. %.2f\n", final_payable);

    return 0;
}
