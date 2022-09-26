
#include <iostream>    
#include <algorithm>
#include <vector>  
using namespace std;
bool minhaFuncao (int i,int j) 
{ 
	return (i<j); 
}

int main () {
  int myints[] = {9,8,7,6,5,4,3,2,1};
  vector<int> meuVector (myints, myints+9);

  // usando o operador padr�o <
  partial_sort (meuVector.begin(), meuVector.begin()+6, meuVector.end());
  
   std::cout << "Vetor Ordenado sem Fun��o at� o 6 elemento:";
  for (std::vector<int>::iterator it=meuVector.begin(); it!=meuVector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << "\n";
  meuVector.assign(myints, myints+9);

  // usando uma fun��o de compara��o.
  partial_sort (meuVector.begin(), meuVector.begin()+4, meuVector.end(),minhaFuncao);

  std::cout << "Vetor Ordenado com Fun��o at� o 4 elemento:";
  for (std::vector<int>::iterator it=meuVector.begin(); it!=meuVector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
