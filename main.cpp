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
  int min, max;
      for (int i = 0 ; i < 6 ; ++i){
        cout << "Entre com o valor " << i << endl;
          cin >> vetor[i]; 
      }      // Insere elementos no vetor
      
      for(int i = 0; i < 6; ++i){
        cout << vetor[i] << " ";
      }

      cout << endl;

      max = vetor[0];
      for(int i = 1; i < 5; i++){
        if(vetor[i] > max){
          max = vetor[i];
        }
      }

      cout << max << endl;
}
  