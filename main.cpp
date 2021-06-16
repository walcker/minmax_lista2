#include <iostream>   // cout, endl
#include <cassert>    // assert()
#include <random>     // random_device, mt19937
#include <iterator>   // std::begin(), std::end()


using namespace std;

  template <typename Itr, typename Compare >
pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    // TODO
    return make_pair( first, first );
} 

int main ( void )
{

vector<int> vect;               // Declara um vetor de inteiros.
    for (auto i(0) ; i < 6 ; ++i)
        vect.push_back(i);          // Insere elementos no vetor
    vector<int>::const_iterator it; // Declara um iterator
    it = vect.begin();              // Atribui ao iterator o inicio do vetor
    while (it != vect.end()) {      // Enquanto não chegou no fim
        cout << *it << " ";         // imprime o valor do elemento "apontado" pelo iterato
        ++it;                       // move para o próximo elemento
    }
    cout << endl;

}