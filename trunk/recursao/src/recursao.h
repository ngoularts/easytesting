// Copyright 2010 Thiago Noronha

#ifndef RECURSAO_SRC_RECURSAO_H_

#define RECURSAO_SRC_RECURSAO_H_

// Retorna o valor do fatorial de n.
int fat(int n);

// Retorna k elevado a n.
int pow(int k, int n);

// Retorna o menor multiplo comum de a e b.
int mmc(int a, int b);

// Retorna o maximo divisor comum entre a e b.
int mdc(int a, int b);

// Retorna o maximo divisor comum entre a, b e c.
int mdc3(int a, int b, int c);

// Retorna o n-esimo termo da serie de Fibonacci.
int fib(int n);

// Retorna o resto da divisao de a por b.
int resto(int a, int b);

// Retorna o resultado da divisao inteira de a por b.
int div_(int a, int b);

// Retorna a soma dos digitos de um inteiro positivo n.
// Por exemplo: dig(123) retorna 6.
int dig(int n);

// Retorna a raiz quadrada de n (com precisao de 0.001).
double sqrt_(double n);

#endif  // RECURSAO_SRC_RECURSAO_H_
