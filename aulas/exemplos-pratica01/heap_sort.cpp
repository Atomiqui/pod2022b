#include <iostream>     
#include <algorithm>    
#include <vector>       

int main () {
  int myints[] = {6,5,3,1,8,7,2,4};
  std::vector<int> v(myints,myints+8);

  std::make_heap(v.begin(),v.end());//cira a árvore binária de elementos
  std::cout << "Valor inicial maximo   : \n" << v.front() << '\n';

  std::pop_heap (v.begin(),v.end()); v.pop_back();
  std::cout << "Pilha máxima apos pop : \n" << v.front() << '\n';

  std::sort_heap (v.begin(),v.end());

  std::cout << "Resultado Final:\n";
  for (unsigned i=0; i<v.size(); i++)
    std::cout << " " << v[i];

  std::cout << '\n';

  return 0;
}

