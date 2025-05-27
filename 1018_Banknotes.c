#include <stdio.h>

int main() {
    int N, count;

    scanf("%d", &N);
    printf("%d\n", N);

    count = N / 100;
    printf("%d nota(s) de R$ 100,00\n", count);
    N = N % 100;

    count = N / 50;
    printf("%d nota(s) de R$ 50,00\n", count);
    N = N % 50;

    count = N / 20;
    printf("%d nota(s) de R$ 20,00\n", count);
    N = N % 20;

    count = N / 10;
    printf("%d nota(s) de R$ 10,00\n", count);
    N = N % 10;

    count = N / 5;
    printf("%d nota(s) de R$ 5,00\n", count);
    N = N % 5;

    count = N / 2;
    printf("%d nota(s) de R$ 2,00\n", count);
    N = N % 2;

    count = N / 1;
    printf("%d nota(s) de R$ 1,00\n", count);

    return 0;
}
