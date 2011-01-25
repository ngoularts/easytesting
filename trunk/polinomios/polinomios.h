#ifndef POLINOMIOS_H_

#define POLINOMIOS_H_

// Copyright 2010 Thiago Ferreira de Noronha.
//
//  Algoritmos e Estruturas de Dados II
//
// Lista sobre Tipos Abstratos de Dados - TAD.
//
// Introdu��o: Um polin�mio de grau n � uma fun��o do tipo
// P(x) = a0 + a1*x + a2*x2 + ... + an*xn, onde a0, a1, a2, ... , an pertencem ao
// conjunto dos n�meros reais. Qualquer polin�mio de grau n pode ser
// representado em um programa de computador por um vetor p com n + 1 posi��es,
// onde cada posi��o p[i] do vetor armazena o valor do coeficiente
// ai, i  {0, ..., n}. Por exemplo: o polin�mio de grau 4,
// Q(x) = 5 + 3x2 + 2x4 = 5x0 + 0x1 + 3x2 + 0x3 + 2x4,
// pode ser representado pelo vetor "float q[5] = {5, 0, 3, 0, 2};"

#define GRAU_MAXIMO 1000

struct Polinomio {
private:
  int n;  // Numero de elementos no vetor 'a'. O grau do polinomio eh n - 1.
  float a[GRAU_MAXIMO + 1];  // Vetor com os coeficientes do polinomio.

public:
  // Cria um polin�mio igual a P(x)=0.
  Polinomio();

  // Cria um polin�mio a partir de um vetor q com m elementos.
  Polinomio(int m, float* q);

  // Retorna o grau do polin�mio.
  int grau();

  // Retorna o coeficiente a[i].
  float get(int i);

  // Atribui o valor 'b' ao coeficiente a[i].
  void set(int i, float b);

  // Retorna o valor do polin�mio corrente no ponto x.
  float Avaliar(float x);

  // Faz com que o polin�mio corrente fique igual ao polin�mio q
  // passado como par�metro.
  void Atribuir(Polinomio& q);

  // Atribui ao polin�mio corrente a soma dos polin�mios p1 e p2
  // de mesmo grau passados como par�metro.
  void Somar(Polinomio& p1, Polinomio &p2);

  // Faz com que o polin�mio corrente fique igual a derivada do polin�mio q
  // passado como par�metro.
  void Derivar(Polinomio& q);

  // Faz com que o polin�mio corrente fique igual a integral do polin�mio q
  // passado como par�metro.
  void Integrar(Polinomio& q);
 };

#endif  // POLINOMIOS_H_
