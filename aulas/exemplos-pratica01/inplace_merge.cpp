#include <iostream>     
#include <algorithm>    
#include <vector>    

using namespace std;   

int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  vector<int> v(10);
  vector<int>::iterator it;

  sort (first,first+5);
  sort (second,second+5);

  it=copy (first, first+5, v.begin());
     copy (second,second+5,it);

  inplace_merge(v.begin(),v.begin()+5,v.end());

  std::cout << "O vetor final fica:\n";
  for (it=v.begin(); it!=v.end(); ++it)
    cout << ' ' << *it;
  cout << '\n';

  return 0;
}


