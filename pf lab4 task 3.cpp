#include <stdio.h>

int main() {
    int account_type;
    double balance, interest = 0.0;

    
    printf("Enter Account Type (1 = Savings, 2 = Current, 3 = Fixed Deposit): ");
    scanf("%d", &account_type);
    printf("Enter Account Balance (Rs.): ");
    scanf("%lf", &balance);

    
    switch (account_type) {
        case 1: 
            if (balance > 100000) {
                interest = balance * 0.04;
            } else {
                interest = balance * 0.02;
            }
            break;

        case 2: 
            interest = 0.0;
            break;

        case 3:
            interest = balance * 0.08;
            break;

        default:
            printf("Invalid Account Type entered.\n");
            return 1;
    }

    printf("Annual Interest Earned: Rs. %.2f\n", interest);

    return 0;
}