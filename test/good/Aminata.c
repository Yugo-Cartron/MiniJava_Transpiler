/*
class Aminata {
  public static void main(String[] args) {
    System.out.println(new A().aminata(10));
  }
}
class A {
  public int aminata(int n) {
    int res;
    if (n == 10 || n == 3) {
      res = 1;
    }
    else {
      res = 0;
    }
    return res;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
struct A;
void* A_aminata(struct A* this, int n);
struct A {
  void* (**vtable)();
};
void* (*A_vtable[])() = { A_aminata };
void* A_aminata(struct A* this, int n) {
  int res;
  if (((n == 10) || (n == 3))) {
    res = 1;
  }
  else {
    res = 0;
  }
  return (void*)(res);
}
int main(int argc, char *argv[]) {
  printf("%d\n", ({ struct A* tmp1 = ({ struct A* res = calloc(1, sizeof(*res)); res->vtable = A_vtable; res; }); (int) tmp1->vtable[0](tmp1, 10); }));
  return 0;
}
