#include <stdio.h>

int main() {
    float a, b, c, d, average, extra, final;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    average = (a*2 + b*3 + c*4 + d*1) / 10;

    printf("Media: %.1f\n", average);

    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } 
    else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    } 
    else {
        printf("Aluno em exame.\n");
        scanf("%f", &extra);
        printf("Nota do exame: %.1f\n", extra);
        final = (average + extra) / 2.0;

        if (final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", final);
    }

    return 0;
}
