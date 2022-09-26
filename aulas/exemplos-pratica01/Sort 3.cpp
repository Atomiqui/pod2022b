#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Pessoa
{
    string nome;
    int idade;
    string cor;
};

bool sortNome(const Pessoa &lhs, const Pessoa &rhs) { return lhs.nome < rhs.nome; }

bool sortIdade(const Pessoa &lhs, const Pessoa &rhs) { return lhs.idade < rhs.idade; }

bool sortCor(const Pessoa &lhs, const Pessoa &rhs) { return lhs.cor < rhs.cor; }

int main()

{
    vector<Pessoa> pessoa(3);
    pessoa[0].nome = "Joao";  pessoa[0].idade = 20; pessoa[0].cor = "Azul";
    pessoa[1].nome = "Pedro"; pessoa[1].idade = 15; pessoa[1].cor = "Vermelho";
    pessoa[2].nome = "Maria"; pessoa[2].idade = 55; pessoa[2].cor = "Laranja";
    
	cout << "Ordenacao por Nome: \n";
    sort(pessoa.begin(), pessoa.end(), sortNome);
    for (Pessoa &n : pessoa)
        cout << n.nome << " ";
    cout << endl;
    
    cout << "Ordenacao por Idade: \n";
    sort(pessoa.begin(), pessoa.end(), sortIdade);
    for (Pessoa &n : pessoa)
        cout << n.idade << " ";
    cout << endl;
    
	cout << "Ordenacao por Cor: \n";
	sort(pessoa.begin(), pessoa.end(), sortCor);
    for (Pessoa &n : pessoa)
        cout << n.cor << " ";
    cout << endl;
}

