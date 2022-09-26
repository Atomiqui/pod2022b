#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
 
struct Pessoa {
	Pessoa(int idade, std::string nome) : idade(idade), nome(nome) { }  
    int idade;
    std::string nome; 
};
 
bool operator<(const Pessoa &lhs, const Pessoa &rhs) {
    return lhs.idade < rhs.idade;
}

bool sortNome(const Pessoa &lhs, const Pessoa &rhs) {
    return lhs.nome < rhs.nome;
}
 
main()
{
    vector<Pessoa> v = { 
        Pessoa(23, "Zaphod"),
        Pessoa(32, "Arthur"),
        Pessoa(108, "Ford"),
    };  
 
    stable_sort(v.begin(), v.end());
    stable_sort(v.begin(), v.end(), sortNome);
 
    for (const Pessoa &e : v) {
        cout << e.idade << ", " << e.nome << "\n";
    }  
	system("pause");
}
