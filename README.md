# ELC1068 - Pesquisa e Ordenação de Dados "A"


Professor: [João Vicente Ferreira Lima](http://www.inf.ufsm.br/~jvlima)

Contato: jvlima em inf.ufsm.br ou CT/UFSM sala 380 Anexo B.

Carga horária: 60h.

Ementa oficial: https://www.ufsm.br/ementario/disciplinas/ELC1068

Horários: terças e quintas 14:30 às 16:30.

Calendário UFSM: https://www.ufsm.br/calendario/

## Informações

[Notas disponíveis aqui](notas-de-aula-pod-ufsm.pdf)

- Avaliações:
  - Duas (2) provas peso `7`.
  - Três (3) trabalhos peso `3`.
- Presença e chamada:
  - Obrigatória podendo faltar até **7 aulas** (75% de 60h).

## Cronograma
|  # | Data             | Assunto          | Leitura |
|---:|------------------|:-----------------|:-------------|
|  1 | 2022-09-13  Ter       | Apresentação da disciplina.                                                      |                                                          |
|  2 | 2022-09-15 Qui       | Introdução a análise e complexidade de algoritmos.                               | Ziviane cap 1, Cormen cap 1/2/3, Sedgewick (1.4)         |
| - | 2022-09-20 Ter | **Feriado** (Revolução Farroupilha) | |
|  3 | 2022-09-22 Ter       | Introdução a ordenação de dados. Ordenação interna.                              | Ziviane cap 4, Sedgewick cap 2                           |
| - | 2022-09-27 Ter | **Sem aula**  | |
|  4 | 2022-09-29 Qui       | Ordenação interna: quicksort, mergesort.                                         | Ziviane cap 4, Sedgewick cap 2                           |
|  5 | 2022-10-04 Ter       | Ordenação interna: quicksort, mergesort.                                         | Ziviane cap 4, Cormen cap 7, Sedgewick cap 2             |
|  6 | 2022-10-06 Qui       | Ordenação interna: heapsort.                                                     | Ziviane cap 4, Cormen cap 6, Sedgewick cap 2             |
|  7 | 2022-10-11 Ter       | Aula prática: ordenação e busca em C++                                           |                                                          |
|  8 | 2022-10-13 Qui       | Ordenação interna: countingsort, bucketsort, radixsort.                          | Ziviane cap 4, Cormen cap 8, Sedgewick cap 2             |
|  9 | 2022-10-18 Ter       | Ordenação externa: classificação.                                                | Ziviane cap 4                                            |
| 10 | 2022-10-20 Qui       | Ordenação externa: intercalação.                                                 | Ziviane cap 4                                            |
| 11 | 2022-10-25 Ter       | Introdução a pesquisa em memória primária.                                       | Ziviane cap 5, Sedgewick cap 3                           |
| 12 | 2022-10-27 Qui       | Árvores balanceadas: AVL.                                                        | Sedgewick cap 2,Cormen cap 11                            |
| 13 | 2022-11-01 Ter       | Árvores balanceadas: AVL e rubro-negras (red-black trees)                        |                                                          |
| 14 | 2022-11-03 Qui       | Árvores balanceadas: AVL e rubro-negras (red-black trees)                        |                                                          |
| - | 2022-11-08 Ter | **JAI**  | |
| - | 2022-11-10 Qui | **JAI**  | |
| - | 2022-11-15 Ter | **Feriado** (Proclamação da República) | |
| - | 2022-11-17 Qui | **SAINF 2022 ??** | |
| 15 | 2022-11-22 Ter       | Revisão |           |
| 16 | 2022-11-24 Qui  | **Prova I** |           |
| 17 | 2022-11-29 Ter       | Tabelas Hash                                                                     | Ziviane cap 5, Cormen cap 11                             |
| 18 | 2022-12-01 Qui       | Pesquisa digital: árvores Trie e Patricia                                        | Ziviane cap 5                                            |
| 19 | 2022-12-06 Ter       | Pesquisa digital: árvores Trie e Patricia                                        | Ziviane cap 5                                            |
|    | 2022-12-06 Qui       |  **Feriado** (Nossa Senhora da Conceição)    |            |
| 20 | 2022-12-13 Ter       | Pesquisa em memória secundária, índices (densos e esparsos)                      | Ziviane cap 6, Silberschatz cap 10, Garcia-Molina cap 4  |
| 21 | 2022-12-15 Qui       | Índices - Árvore B+                                                              |                                                          |
| 22 | 2022-12-20 Ter       | Índices - Árvore B+                                                              |                                                          |
| 23 | 2022-12-22 Qui       | Índices hash, índices compostos, índices de bitmap                               | Silberchatz cap 11, Navathe cap 17, Garcia-Molina cap 5. |
| 24 | 2023-01-03 Ter       | Arquivos de grade e hash particionado, índices de múltiplas chaves, e árvores Kd | Garcia-Molina cap 5                                      |
| 25 | 2023-01-05 Qui       | Árvores quadrante e árvores R                                                    |                                                          |
| 26 | 2023-01-10 Ter       | Introdução a compressão de arquivos                                              |                                                          |
| 27 | 2023-01-12 Qui       | Métodos básicos e estatísticos                                                   |                                                          |
| 28 | 2023-01-17 Ter       | Métodos de compressão LZ77, LZ78, LZW.                                           |                                                          |
| 29 | 2023-01-19 Qui       | Revisão |                                                          |
| 30 | 2023-01-24 Ter       | **Prova II**  |                                                          |
| - | 2023-02-07 Ter | Avaliações Finais | |


## Programa
1. Introdução a análise e complexidade de algoritmos.
2. Ordenação de dados.
   1. Ordenação em memória primária.
      1. Seleção, inserção, shellsort.
      2. Quicksort, mergesort.
      3. Heapsort.
      4. Countingsort, bucketsort, radixsort.
   2. Ordenação em memória secundária.
      1. Classificação.
      2. Intercalação.
3. Pesquisa de dados.
   1. Pesquisa em memória primária.
      1. Árvores binárias de pesquisa.
      2. Árvores balanceadas: AVL.
      3. Árvores balanceadas: rubro-negra.
      4. Árvores Trie.
      5. Árvores Patricia.
   2. Pesquisa em memória secundária.
      1. Índices densos e esparsos.
      2. Árvores B-trees.
      3. Índices Hash.
      4. Índices compostos e bitmaps.
      5. Arquivos de grade e hash particionado.
      6. Índices de múltiplas chaves.
      7. Árvores Kd.
      8. Árvores quadrante.
      9. Árvores R.
4. Compressão de dados.
   1. Métodos básicos e estatísticos.
   2. Métodos LZ77, LZ78.
   3. Método LZW.

## Livros
- Ziviane, Projeto de algoritmos com implementações em Pascal e C. ([slides](http://www2.dcc.ufmg.br/livros/algoritmos/slides.php))
- Cormen, Algoritmos: teoria e prática, 3o edição. ([notas 2008](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-spring-2008/lecture-notes/), [notas 2011](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/))
- Silberschatz, Database system concepts, 6th edition. 
- Sedgewick, Algorithms, 4th edition. ([slides](http://algs4.cs.princeton.edu/lectures/))
- Garcia-Molina, Ullman, Widowm. Implementação de Sistemas de Bancos de Dados.

## Material complementar
- [Introdução em C++](https://github.com/jvlima-ufsm/l22022b/tree/master/aulas/introducao_cxx)
- [Aula prática 1](./aulas/pratica01.pdf) e [exemplos](./aulas/exemplos-pratica01.tgz) (Henrique M. Persch).
- [Arquivos de grade e hash particionado]](./aulas/aula23.pdf)
- [Índices de múltiplas chaves e árvores KD](./aulas/aula24.pdf)
- [Árvores quadrante e árvores R](./aulas/aula25.pdf)
- [Introdução compressão de dados](./aulas/aula26.pdf)
- [Métodos LZ77/LZ78](./aulas/aula27.pdf)
- [Métodos LZW/Burrows Wheeler](./aulas/aula28.pdf)
