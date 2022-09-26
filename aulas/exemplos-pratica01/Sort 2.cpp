#include <iostream>
#include <algorithm>
#include <vector>       // std::vector

using namespace std;

bool compare (int i, int j) 
{ 
	return (i<j); 
}

int main()
{
	int myints[] = {32,71,12,45,26,80,53,33};
    std::vector<int> myvector (myints, myints+8);
    //Mostra como o vetor está.
    cout << "Array Não Ordenado Ordenado" << endl;
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << *it << " ";
    //Chama a função de ordenação
    sort(myvector.begin(), myvector.end(), compare);
    cout << "\nArray Ordenado" << endl;
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << *it << " ";
    return 0;
}

