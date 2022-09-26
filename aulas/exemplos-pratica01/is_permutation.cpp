#include <iostream>   
#include <algorithm>  
#include <array>   

using namespace std;
int main () {
  std::array<int,5> vetor1 = {1,2,3,4,5};
  std::array<int,5> vetor2 = {3,1,4,5,2};

  if ( is_permutation (vetor1.begin(), vetor1.end(), vetor2.begin()) )
    cout << "Ambos vetores possuem os mesmos elementos\n";

  return 0;
}


