#include <iostream>    
#include <algorithm>   
#include <array>       

using namespace std;
int main () {
  array<int,4> vetor {2,4,1,3};

  do {
    // realiza as permutações
    prev_permutation(vetor.begin(),vetor.end());

    // imprime cada etapa
    cout << "Vetor:";
    for (int& x:vetor) 
		cout << " "<< x;
    cout << '\n';

  } while (!is_sorted(vetor.begin(),vetor.end()));

  std::cout << "O vetor está Ordenado!\n";

  return 0;
}


