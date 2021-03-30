/*
class Aminata {
  public static void main(String[] args) {
    if (1 == 1) System.out.println(1);
    else System.out.println(0);
  }
}
*/
#include <stdio.h>
#include <stdlib.h>
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
int main(int argc, char *argv[]) {
  if ((1 == 1)) printf("%d\n", 1);
  else printf("%d\n", 0);
  return 0;
}
