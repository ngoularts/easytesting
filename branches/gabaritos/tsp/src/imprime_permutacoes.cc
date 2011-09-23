#include "tsp/src/imprime_permutacoes.h"

using namespace std;

void ImprimeVetor(FloatVector& v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

void Trocar(float& x, float& y) {
  float aux = x;
  x = y;
  y = aux;
}

void ImprimePermutacoes(FloatVector& v, int inicio) {
  if(inicio == v.size() - 1)   {
    ImprimeVetor(v);
  } else {
    FloatVector aux = v;
    for(int i = inicio; i < v.size(); i++) {
      Trocar(aux[inicio], aux[i]);
      ImprimePermutacoes(aux, inicio + 1);
    }
  }
}

void ImprimePermutacoesDeNumeroMenoresQueN(int n) {
    FloatVector v(n);
    for (int i = 0; i < n; i++) {
      v[i] = i;
    }
    ImprimePermutacoes(v, 0);
}
