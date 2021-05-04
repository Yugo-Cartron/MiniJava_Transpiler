/*
class Aminata {
  public static void main(String[] args) {
    System.out.println(new A().aminata(10));
  }
}
class A {
  public int aminata(int n) {
    int res;
    res = 0;
    if (n == 10) {
      res = 1;
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
  res = 0;
  