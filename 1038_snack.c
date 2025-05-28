#include <stdio.h>

int main(){
  int x,y;
  float c1,c2,c3,c4,c5;
  scanf("%d %d",&x,&y);
  switch (x)
  {
  case 1:
    c1= 4.00*y;
    printf("Total: R$ %.2f\n",c1);
    break;
    case 2:
    c2= 4.50*y;
    printf("Total: R$ %.2f\n",c2);
    break;
    case 3:
    c3= 5.00*y;
    printf("Total: R$ %.2f\n",c3);
    break;
    case 4:
    c4= 2.00*y;
    printf("Total: R$ %.2f\n",c4);
    break;
    case 5:
    c5= 1.50*y;
    printf("Total: R$ %.2f\n",c5);
    break;
  }
  return 0;
}