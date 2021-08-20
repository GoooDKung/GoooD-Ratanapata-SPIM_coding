#include <stdio.h>

main() {
  int A;
  int B;
  int C;
  int Output;
  printf("Enter first number");
  scanf("%d",&A);
  A = A*A*A;
  printf("Enter second number");
  scanf("%d", &B);
  B = B*B;
  printf("Enter last number");
  scanf("%d",&C);
  Output = A+B+C;
  printf("Output is %d", Output);


}
