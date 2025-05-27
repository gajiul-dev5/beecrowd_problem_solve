#include <stdio.h>

int main() {
    double A, B, C;
    double pi = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    double triangle_area = (A * C) / 2.0;
    double circle_area = pi * C * C;
    double trapezium_area = ((A + B) * C) / 2.0;
    double square_area = B * B;
    double rectangle_area = A * B;

    printf("TRIANGULO: %.3lf\n", triangle_area);
    printf("CIRCULO: %.3lf\n", circle_area);
    printf("TRAPEZIO: %.3lf\n", trapezium_area);
    printf("QUADRADO: %.3lf\n", square_area);
    printf("RETANGULO: %.3lf\n", rectangle_area);

    return 0;
}
