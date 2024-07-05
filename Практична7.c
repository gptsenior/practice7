#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центру та радіус першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати центру та радіус другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    
    int points = 0;
    if (d == 0 && r1 == r2) {
        points = -1;  
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        points = 0;  
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        points = 1;  
    } else {
        points = 2;  
    }

    printf("Кількість точок перетину: %d\n", points);
    return 0;
}