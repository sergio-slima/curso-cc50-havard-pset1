# CC50: Introdução à Ciência da Computação
## O Curso de Harvard, no Brasil

#### 🚩O que é Ciência da Computação?
##### A ciência da computação é fundamentalmente sobre resolução de problemas.
##### Podemos pensar na resolução de problemas como o processo de pegar algumas informações (detalhes sobre nosso problema) e gerar alguns resultados (a solução para nosso problema). A “caixa preta” no meio é a ciência da computação, ou o código que aprenderemos a escrever.
#### input ➡ ⬛ ➡ output

#### 🚩Algoritmos
##### Agora que podemos representar inputs e outputs, podemos trabalhar na resolução de problemas.
##### Quando escrevemos programas usando algoritmos, geralmente nos preocupamos não apenas com o quão corretos eles são, mas também com o quão bem projetados eles são, considerando fatores como eficiência.

#### 🚩Pseudocódigo
##### Podemos escrever pseudocódigo, que é uma representação de nosso algoritmo em inglês preciso (ou alguma outra linguagem humana):
```
1 Pegue a lista telefônica
2 Abra no meio da lista telefônica
3 Olhe para a página
4 Se a pessoa estiver na página
5    Ligar para pessoa
6 Caso contrário, se a pessoa estiver mais para o início do livro
7    Abrir no meio da metade esquerda do livro
8    Volte para a linha 3
9 Caso contrário, se a pessoa estiver mais para o final do livro
10   Abrir no meio da metade direita do livro
11   Volte para a linha 3
12 Caso contrário
13   Desistir
```

## Linguagem em C
##### Exemplo básico (Hello, Wold):
````
#include <stdio.h>
int main(void) 
{
    printf("olá, mundo"); 
}
````

#### 🚩CS50 IDE
##### Um ambiente de desenvolvimento integrado que inclui programas e recursos para escrever código. CS50 IDE é construído sobre um IDE baseado em nuvem muito popular, usado por programadores gerais, mas com recursos educacionais adicionais e personalização.

#### 🚩Compilação
##### Nosso código-fonte foi escrito em caracteres que podemos ler, mas precisa ser compilado: convertido em código de máquina, padrões de zeros e uns que nosso computador possa entender diretamente.
##### Um programa chamado compilador pegará o código-fonte como entrada e produzirá o código de máquina como saída. No IDE CS50, já temos acesso a um compilador, por meio de um comando chamado make. Ex: make hello
##### Para executar nosso programa, digitaremos outro comando, ./hello, que procura na pasta atual , . , para um programa chamado hello e o executa.

#### 🚩Funções e argumentos
##### Funções são pequenas ações ou verbos que podemos usar em nosso programa para fazer algo, e as entradas para funções são chamadas de argumentos.
##### Em C, a função de imprimir algo na tela é chamada de printf(com f significando texto “formatado”, que veremos em breve). E em C, passamos os argumentos entre parênteses, como em printf ("hello, world"); . As aspas duplas indicam que queremos imprimir as letras hello, world literalmente, e o ponto-e-vírgula no final indica o fim de nossa linha de código.
##### A Biblioteca CS50 incluirá algumas funções básicas e simples que podemos usar imediatamente. Por exemplo, get_string pedirá ao usuário uma string, ou alguma sequência de texto, e a retornará ao nosso programa. get_string recebe algum input e o usa como prompt para o usuário, como “Qual é o seu nome?”, e nós teremos que salvá-lo em uma variável com:
````
string answer = get_string("Qual é o seu nome?");
````
##### De volta ao IDE CS50, nós implementaremos o que descobrimos:
````
#include <cs50.h>
#include <stdio.h>
int main(void)
{
     string answer = get_string("Qual é o seu nome?");
     printf("olá, %s", resposta);
}
````
###### O %s é chamado de código de formatação, o que significa apenas que queremos que a função printf substitua uma variável onde está o marcador %s.
##### Podemos adicionar uma nova linha após a saída de nosso programa, de modo que o próximo prompt esteja em sua própria linha, com \n:
````
printf("olá, %s\n" ,resposta);
````
