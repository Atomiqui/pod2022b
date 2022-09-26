#include <iostream>    
#include <algorithm>    
#include <vector>  

using namespace std;
bool compare_as_ints (double i,double j)
{
  return (int(i)<int(j));
}

int main () {
  double mydoubles[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};

  vector<double> myvector;

  myvector.assign(mydoubles,mydoubles+8);

  cout << "Usando comparação Padrão:\n";
  stable_sort (myvector.begin(), myvector.end());
  for (std::vector<double>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  cout << '\n';

  myvector.assign(mydoubles,mydoubles+8);

  cout << "Usando a função:\n";
  stable_sort (myvector.begin(), myvector.end(), compare_as_ints);
  for (std::vector<double>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  cout << '\n';

  return 0;
}


