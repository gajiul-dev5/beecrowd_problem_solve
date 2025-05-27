#include <stdio.h>

int main() {
    int distance, time;

    scanf("%d", &distance);

    time = distance * 2;  // since 1 km gap = 2 minutes

    printf("%d minutos\n", time);

    return 0;
}
