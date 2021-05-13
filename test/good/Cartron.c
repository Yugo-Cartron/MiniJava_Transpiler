/*
class Aminata {
  public static void main(String[] args) {
<<<<<<< HEAD:test/good/Aminata.c
    System.out.println(new A().aminata());
  }
}
class A {
  public int aminata() {
    int i;
    i = 0;
    i += 10;
    return i;
=======
    System.out.println(new A().aminata(8));
  }
}
class A {
  public int aminata(int n) {
    int res;
    res = n;
    if (n > 10) {
      res = 0;
    }
    else {
      res = 1;
    }
    return res;
>>>>>>> 7e893c5b25bf31fc8166ba6836713a75755b36cc:test/good/Cartron.c
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
<<<<<<< HEAD:test/good/Aminata.c
void* A_aminata(struct A* this) {
  int i;
  i = 0;
  i += 10;
  return (void*)(i);
}
int main(int argc, char *argv[]) {
  printf("%d\n", ({ struct A* tmp1 = ({ struct A* res = calloc(1, sizeof(*res)); res->vtable = A_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
=======
void* A_aminata(struct A* this, int n) {
  int res;
  res = n;
  if ((n > 10)) {
    res = 0;
  }
  else {
    res = 1;
  }
  return (void*)(res);
}
int main(int argc, char *argv[]) {
  printf("%d\n", ({ struct A* tmp1 = ({ struct A* res = calloc(1, sizeof(*res)); res->vtable = A_vtable; res; }); (int) tmp1->vtable[0](tmp1, 8); }));
>>>>>>> 7e893c5b25bf31fc8166ba6836713a75755b36cc:test/good/Cartron.c
  return 0;
}
