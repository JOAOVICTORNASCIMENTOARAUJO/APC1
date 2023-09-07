#include <studio.h

int main(){
  //operadore de atribuicao
  int valor = 10;
  valor = 20;
  //operadores aritimeticos + - x /
  int soma = 10 + 2;
  int subtracao = 10 - 2;
  int multiplicaxao = 10 * 2;
  int divisao = 10 / 2;
  int resto = 10 % 2;

  //operadores incremento e decremento
  int pos_incremento = soma++; // soma + 1
  int pos_decremento = soma--; // soma - 1
  int pre_incremento = ++soma; // soma + 1
  int pre_decremento = --soma; // soma - 1

  //opereradores racionais
  int menor_que = 0 < 1;
  int menor_igual = 0 <= 1;
  int maior_que = 0 > 1;
  int maior_igual = 0 >= 1;
  int igual = 0 == 1;
  int diferente = 0 != 1;

  // operadores logicos
  int e = 0 < 1 && 1 < 10; //0 < x < 10
  int ou = 0 < 1 || 1 > 10 // 0 < 1, 1 > 10
  int nao = !0; // 10=1, 11=0
  
  return 0;
  
}