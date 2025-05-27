#include <stdio.h>

int main() {
    int time, speed;
    double distance, liters;

    scanf("%d %d", &time, &speed);

    distance = time * speed;
    liters = distance / 12.0;

    printf("%.3lf\n", liters);

    return 0;
}
