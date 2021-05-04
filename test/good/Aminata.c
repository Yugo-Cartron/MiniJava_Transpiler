/*
class Aminata {
  public static void main(String[] args) {
    System.out.println(new A().aminata());
  }
}
class A {
  public int aminata() {
    int i;
    i = 0;
    i += 10;
    return i;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
struct A;
void* A_aminata(struct A* this);
struct A {
  void* (**vtable)();
};
void* (*A_vtable[])() = { A_aminata };
void* A_aminata(struct A* this) {
  int i;
  i = 0;
  i += 10;
  return (void*)(i);
}
int main(int argc, char *argv[]) {
  printf("%d\n", ({ struct A* tmp1 = ({ struct A* res = calloc(1, sizeof(*res)); res->vtable = A_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  return 0;
}
