#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int myints[] = {32,71,12,45,26,80,53,33};
    std::vector<int> myvector (myints, myints+8);
    //Mostra como o vetor est�.
    cout << "Array N�o Ordenado Ordenado\n" << endl;
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << *it << " ";
    //Chama a fun��o de ordena��o
    sort(myvector.begin(), myvector.end());
    cout << "\nArray Ordenado\n" << endl;
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        cout << *it << " ";
    return 0;
}

