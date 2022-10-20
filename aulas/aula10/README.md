# Exemplo de Busca Binária

Vimos na aula o código abaixo para busca binária:
```C
int Binaria( int* A, int n, int chave ) {
	int esq, dir, i;
	esq = 1;
	dir = n;
	do{
		i = (esq+dir)/2;
		if( A[i] > chave )  esq = i+1;
		else                dir = i-1;
	} while( (A[i] != chave) && (esq <= dir) );
	if(chave == A[i]) return i;
	return -1; /* sem sucesso */
}
```

O algoritmo acima não seria genérico sufiente porque pode causar *overflow* e faz uma comparação adicional. [Sean Parent](https://www.youtube.com/watch?v=iwJpxWHuZQY&t=1692s) commenta sobre uma versão genérica do algoritmo.
```C++
template<class I, class T>
I lower_bound(I f, I l, const T& v){
    while(f != l){
        auto m = next( f, distance(f, l)/2 );

        if(*m < v) f = next(m);
        else l = m;
    }
    return f;
}
```
A função `lower_bound` faz uma busca binária e retorna o índice do elemento encontrado, ou o primeiro elemento que não satisfaz a condição `elem < v`.

# Referências
- https://www.youtube.com/watch?v=iwJpxWHuZQY&t=1692s
- https://en.cppreference.com/w/cpp/algorithm/lower_bound