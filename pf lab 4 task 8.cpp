#include <stdio.h>

int main() {
    int zone_type, driver_speed;
    int speed_limit = 0;
    int fine = 0;

    printf("Enter Zone Type (1=School, 2=Highway, 3=Residential): ");
    scanf("%d", &zone_type);
    printf("Enter driver speed (km/h): ");
    scanf("%d", &driver_speed);

    switch (zone_type) {
        case 1: speed_limit = 30; break;
        case 2: speed_limit = 100; break;
        case 3: speed_limit = 50; break;
        default:
            printf("Invalid Zone Type!\n");
            return 1;
    }

    if (driver_speed > speed_limit) {
        int excess_speed = driver_speed - speed_limit;
        if (excess_speed > 20) {
            fine = 1000 * 2;
        } else {
            fine = 1000;   
        }
        printf("Violation! Speed limit was %d km/h. Final Fine: Rs. %d\n", speed_limit, fine);
    } else {
        printf("No violation. Fine: Rs. 0\n");
    }

    return 0;
}