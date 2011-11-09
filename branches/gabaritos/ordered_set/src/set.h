// Copyright 2011 Universidade Federal de Minas Gerais (UFMG)

#ifndef BRANCHES_GABARITOS_ORDERED_SET_SRC_SET_H_
#define BRANCHES_GABARITOS_ORDERED_SET_SRC_SET_H_

#include <string>

// Tipo dos elementos contidos no conjunto.
typedef std::string type;

// Defite como os elementos do conjunto serão organizados na memória.
// É declarado aqui, mas só é implementado em set.cc para não violar o
// encapsulamento
struct node;

// Implementa um conjunto utilizando árvores binárias de busca.
// NOTA: O cálculo da complexidade das funções assume que a árvore está
// balanceada, ou seja, considera-se que a altura da arvore é O(log n), onde n
// é a cardinalidade do conjunto. Entretanto, isto não é garantido nesta
// implentação.
class set {
 public:
  // Cria um conjunto vazio em O(1).
  set();

  // Cria um conjunto com os mesmos elementos de s em O(m*log m),
  // onde m = s.size().
  set(set& s);

  // Libera toda a memória alocada para o conjunto em O(n*log n).
  ~set();

  // Retorna um ponteiro para o MENOR elemento do conjunto em O(log n).
  // Caso o conjunto esteja vazio, rentorna um ponteiro para set::end().
  node* begin();

  // Retorna um ponteiro para o "marcador de fim" do conjunto em O(1).
  node* end();

  // Retorna um ponteiro para o sucessor do elemento indicado por x no conjunto,
  // ou seja, o menor elemento maior que aquele indicado por x em O(log n).
  node* next(node* x);

  // Retorna o valor do elemento indicado por x em (1).
  type value(node* x);

  // Testa se o cojunto está vazio em O(1).
  bool empty();

  // Retorna o número de elementos no conjunto em O(1).
  int size();

  // Retorna um ponteiro para o elemento k em O(log n),
  // ou um ponteiro para set::end() caso k não pertença ao conjunto.
  // OBS: Note que esta função NÃO retorna bool. Para testar se um elemento 'a'
  // pertence a um conjunto 'c', você deve escrever "if (c.find(a) != c.end())".
  node* find(type k);

  // Insere k no conjunto em O(log n) e retorna um ponteiro para este elemento.
  // Caso k já pertença ao conjunto, um novo elemento NÃO é inserido no conjunto
  // e a função retorna um ponteiro o para o elemento k já existente.
  node* insert(type k);

  // Remove k do conjunto (caso lá ele esteja) em O(log n).
  void erase(type k);

  // Remove todos os elementos do conjunto em O(n*log n).
  void clear();

  // Faz com que o conjunto corrente contenha exatamente os mesmos elementos
  // do cojunto s em O(m*log m), onde m = s.size().
  void operator=(set& s);

 private:
  // Número de elementos no conjunto.
  int size_;

  // Nó sentinela da árvore binária de busca que representa o conjunto.
  node* end_;

  friend class Teste;
};
#endif  // BRANCHES_GABARITOS_ORDERED_SET_SRC_SET_H_
