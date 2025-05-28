#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, x, y, d;
  scanf("%f %f %f", &a, &b, &c);
  if (a == 0)
  {
    printf("Impossivel calcular\n");
  }
  else
  {
    d = (b * b - 4 * a * c);
    if (d < 0)
    {
      printf("Impossivel calcular\n");
    }
    else
    {
      d =sqrt(d);
      x = (-b + d) / (2 * a);
      y = (-b - d) / (2 * a);
      printf("R1 = %.5f\n", x);
      printf("R2 = %.5f\n", y);
    }
  }
  

    return 0;
  }