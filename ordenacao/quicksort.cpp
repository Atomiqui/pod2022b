
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
int Partition( vector<T>& A, int inicio, int fim ){
	auto esq = inicio;
	auto dir = fim + 1;
	auto pivo = A[inicio];
	do {
		while( pivo > A[++esq] )
			if( esq == fim ) break;
		while( pivo < A[--dir] )
			if( dir == inicio ) break;
		if( esq < dir )
			swap( A[esq], A[dir] );
	} while( esq < dir  );
	swap( A[inicio], A[dir] );
	return dir;
}

template<typename T>
void Quicksort( vector<T>& A, int esq, int dir ) {
	if( esq < dir ){
		auto i = Partition( A, esq, dir );
		Quicksort( A, esq, i - 1 );
		Quicksort( A, i + 1, dir );
	}
}

int main(void)
{
    auto n = 100000;
    vector<int> A(n);
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
        Quicksort( A, 0, A.size()-1 );
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