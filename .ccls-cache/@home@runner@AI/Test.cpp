#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

struct Punto {
  int x, y;
} A, T, P;

int main() {

  A.x = 6, A.y = 5;
  T.x = 8, T.x = 1;
  P.x = 3, P.y = 1;

  int AP, TP, TA;

  AP = A.y - P.y;
  TP = T.x - P.x;

  TA = sqrt(pow(AP, 2) + pow(TP, 2));

  printf("%d\n", AP);
  printf("%d\n", TP);
  printf("%d\n", TA);

  if (TA < 10) 
    printf("Puedes disparar");
  else
    printf("No puedes disparar\n");

  return 0;
}