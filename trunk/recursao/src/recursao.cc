#include "easytesting/recursao/src/recursao.h"

#include <math.h>

int fat(int n) {
  if ((n == 1) or (n == 0))
    return 1;
  else
    return n * fat(n-1);
}

int pow(int k, int n) {
  if (n == 0)
    return 1;
  else
    return k * pow(k, n - 1);
}

int mdc(int a, int b) {
  if (a % b == 0)
    return b;
  else
    return mdc(b, a%b);
}

int mdc3(int a, int b, int c) {
  return mdc(mdc(a, b), c);
}

int mmc(int a, int b) {
  return (a * b) / mdc(a, b);
}

int fib(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return fib(n - 1) + fib(n - 2);
}


int resto(int a, int b) {
  if (a < b)
    return a;
  else
    return resto(a - b, b);
}

int div_(int a, int b) {
  if(a < b)
    return 0;
  else
    return 1 + div_(a - b, b);
}

int dig(int n) {
  if (n < 10)
    return n;
  else
    return n % 10 + dig(n / 10);
}

// Utilizada por 'double sqrt(double n)'.
// Procura o ponto 'x' onde f(x) = X^2 - n � menor que 0.001.
double bissecao(double n, double a, double b) {
  double x = (a + b) / 2;
  if (fabs(a - b) < 0.001)
    return x;
  else if (x*x > n)
    return bissecao(n, a, x);
  else
    return bissecao(n, x, b);
}

double sqrt_(double n) {
  return bissecao(n, 0.0, n);
}
