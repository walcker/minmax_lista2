#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main ( void ){

  //Permite usar acentos
  setlocale(LC_ALL,"");

  int vetor[5];    // Declara um vetor de inteiros.
  int min, max, max_i, min_i;
      
      //Pede os valores do vetor ao usuário
      for (int i = 0 ; i < 6 ; ++i){
        cout << "Entre com o valor " << i << endl;
          cin >> vetor[i]; 
      }      // Insere elementos no vetor
      
      //Imprime o vetor na tela
      for(int i = 0; i < 6; ++i){
        cout << vetor[i] << " ";
      }

      cout << endl;

      //Encontra o local do valor máximo no vetor
      max = vetor[0];
      for(int i = 1; i < 5; i++){
        if(vetor[i] > max){
          max = vetor[i];
          max_i = i;
        }
      }

      //Encontra o local do valor mínimo no vetor
      min = vetor[0];
      for(int i = 1; i < 5; i++){
        if(vetor[i] < min){
          min = vetor[i];
          min_i = i;
        }
      }

      //Imprime a localização dos valores máximo e mínimo no vetor
      cout << max_i << " " << min_i << endl;
}
  