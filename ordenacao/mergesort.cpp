
#include <iostream>
#include <vector>
#include <random>
#include <functional>
#include <chrono>
#include <algorithm>
#include <iomanip>
#include <cassert>
#include <iterator>

using namespace std;

template<typename T>
void Merge( vector<T>& A, int inicio, int meio, int fim, vector<T>& aux ){
	auto i = inicio,j = meio + 1;
	for(auto k = inicio; k <= fim; k++ )
		aux[k] = A[k];
	for(auto k = inicio; k <= fim; k++ ){
		if(i > meio)		 A[k] = aux[j++];
		else if(j > fim)	 A[k] = aux[i++];
		else if(aux[j] < aux[i]) A[k] = aux[j++];
		else 			 A[k] = aux[i++];
	}
}

template<typename T>
void Mergesort( vector<T>& A, int inicio, int fim, vector<T>& aux ){
	if( inicio < fim ){
		auto meio = (inicio + fim - 1)/2;
		Mergesort( A, inicio, meio, aux );
		Mergesort( A, meio + 1, fim, aux );
		Merge( A, inicio, meio, fim, aux );
	}
}

int main(void)
{
    auto n = 1000;
    vector<int> A(n);
    vector<int> aux(n);
    vector<int> Acopia(n);

     // a semente e o tempo desde 1/1/1970
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    default_random_engine r1(seed);
    uniform_int_distribution<int> uniform_dist(0, 10000);

    // gera entrada aleatoria
    auto rand = bind(uniform_dist, r1);
    generate( A.begin(), A.end(), rand );
    // faz copia de verificacao
    copy( A.begin(), A.end(), Acopia.begin() );

    // imprime entrada
    copy( A.begin(), A.end(), ostream_iterator<int>(cout, " ") );
    cout << endl;

    {
        // teste do algoritmo 
        auto inicio = chrono::system_clock::now();
        Mergesort( A, 0, A.size()-1, aux );
        auto fim = chrono::system_clock::now();
        auto tempo = chrono::duration_cast<chrono::microseconds>(fim-inicio).count();
        cout << setprecision(4) << tempo << " (us)" << endl;
    }
 
    {
        // ordena original e tempo
        auto inicio = chrono::system_clock::now();
        sort( Acopia.begin(), Acopia.end() );
        auto fim = chrono::system_clock::now();
        auto tempo = chrono::duration_cast<chrono::microseconds>(fim-inicio).count();
        cout << setprecision(4) << tempo << " (us)" << endl;
    }

    // testamos a validade do resultado
    assert( equal( A.begin(), A.end(), Acopia.begin() ) );

    return 0;
}