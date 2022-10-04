
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
void Insercao( vector<T>& A ) {
	for( auto j = 1; j < A.size(); j++ ){
		auto x = A[j];
		auto i = j - 1;
		while( i >= 0 && x  < A[i] ){
			A[i+1] = A[i];
			i--;
		}
		A[i+1] = x;
	}
}

int main(void)
{
    auto n = 1000;
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
        Insercao( A );
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