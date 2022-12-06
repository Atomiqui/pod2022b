
# T1 - Maratona de Ordenação

## Deadline

Prazo: **01/02/2023 (Qua)** pelo link do GitHub (https://classroom.github.com/a/ZogbTS6u).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

Algoritmos de ordenação recebem uma sequência de valores e tem como saída uma permutação dos valores tal que sejam ordenados. Vimos em aula três tipos de algoritmos para ordenação em memória primária: métodos simples, métodos eficientes e métodos mais eficientes ou por distribuição.

A template C++ tem um algoritmo de ordenação eficiente chamado `sort` definido como:
|   | Algoritmos `sort()` |
|---:|------------------|
| `sort(b,e)` | Ordena `[b:e)` | 
| `sort(b,e,f)` | Ordena `[b:e)` usando `f(*p,*q)` | 

O trabalho consistem em implementar um algoritmo de ordenação que seja mais rápido que o `sort` do C++.  O código de exemplo para implementação é:
```C++
int main(void)
{
    auto n = 100000;
    vector<int> A(n);
    vector<int> Acopia(n);
    float ganho = 0.0;

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
    //copy( A.begin(), A.end(), ostream_iterator<int>(cout, " ") );
    //cout << endl;

    {
        // teste do algoritmo 
        auto inicio = chrono::system_clock::now();
        Selecao( A );
        auto fim = chrono::system_clock::now();
        auto tempo = chrono::duration_cast<chrono::microseconds>(fim-inicio).count();
        //cout << setprecision(4) << tempo << " (us)" << endl;
        ganho = tempo;
    }
 
    {
        // ordena original e tempo
        auto inicio = chrono::system_clock::now();
        sort( Acopia.begin(), Acopia.end() );
        auto fim = chrono::system_clock::now();
        auto tempo = chrono::duration_cast<chrono::microseconds>(fim-inicio).count();
        //cout << setprecision(4) << tempo << " (us)" << endl;
        ganho = tempo/ganho;
    }

    // testamos a validade do resultado
    if (equal( A.begin(), A.end(), Acopia.begin() ) )
        cout << setprecision(4) << ganho << endl;
    else
        cout << "0" << endl;

    return 0;
}
```

A entrada é:
- Tamanho: `100000`
- Intervalo de valores: `0` a `10000`
- Ordem aleatória 

A saída será apenas o ganho (*speedup*) obtido com a divisão entre o tempo do algoritmo `sort` pelo tempo do algoritmo implementado.

O código será compilado com a linha abaixo:
```
$ g++ -O2 ordenacao.cpp
```

## Avaliação

Uma página mostrá o ranking com o trabalho e o ganho obtido. O algoritmo terá um valor **maior que 1.0** quando supera o `sort`.

A nota do trabalho será:
- **Ganho > 0.1** nota `0.8`
- **Ganho > 0.5** nota `1.0`
- **Ganho > 1.0** nota igual ao ganho, limite de máximo `2.0` (extra)

O valor do ranking será uma média de `10x` execuções do trabalho.

## Regras
- Não modifique o código da `main`, apenas a ordenação.
- O algoritmo deve ser implementado. Não pode ser uma função de biblioteca.
- O resultado precisa ser correto.
- Estruturas adicionais, se necessárias, deve ser alocadas/criadas dentro da função de ordenação.
- Não compila, zero.
- Plágio, zero.