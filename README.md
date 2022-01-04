# CC50: Introdução à Ciência da Computação
## O Curso de Harvard, no Brasil

### Tabela de conteúdos
=================
<!--ts-->
   * [O que é Ciência da Computação?](#O-que-é-Ciência-da-Computação?)
   * [Algoritmos](#Algoritmos)
   * [Pseudocódigo](#Pseudocódigo)
   * [Concatenar com nulo](#Concatenar-com-nulo)   
   * [Char Varchar](#Char-Varchar)
   * [Trabalhar Data Hora](#Trabalhar-Data-Hora)
   * [Conta Registros SQL](#Conta-Registros-SQL)
   * [Substring SQL](#Substring-SQL)
   * [Autor](#Autor)
<!--te-->

#### 🚩O que é Ciência da Computação?
##### A ciência da computação é fundamentalmente sobre resolução de problemas.
##### Podemos pensar na resolução de problemas como o processo de pegar algumas informações (detalhes sobre nosso problema) e gerar alguns resultados (a solução para nosso problema). A “caixa preta” no meio é a ciência da computação, ou o código que aprenderemos a escrever.
#### input ➡ ⬛ ➡ output

#### 🚩Algoritmos
##### Agora que podemos representar inputs e outputs, podemos trabalhar na resolução de problemas.
##### Quando escrevemos programas usando algoritmos, geralmente nos preocupamos não apenas com o quão corretos eles são, mas também com o quão bem projetados eles são, considerando fatores como eficiência.

#### 🚩 Pseudocódigo
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

#### 🚩Função principal(main) e arquivos de cabeçalho
##### Em C, a primeira linha é int main (void), seguida por uma chave aberta { e uma chave fechada } , envolvendo tudo o que deveria estar em nosso programa.
````
int main(void)
{ 

}
````
##### Arquivos de cabeçalho que terminam com .h referem-se a algum outro conjunto de código, como uma biblioteca, que podemos usar em nosso programa. Nós os incluímos com linhas como #include <stdio.h> , por exemplo, para a biblioteca de entrada / saída padrão, que contém a função printf.

#### 🚩Ferramentas
##### **help50** é um comando que podemos executar para explicar problemas em nosso código de uma forma mais amigável. Podemos executá-lo adicionando help50 à frente de um comando que estamos tentando, como help50 make hello , para obter conselhos que possam ser mais compreensíveis.
##### Podemos executar **style50** , como style50 hello.c, com o nome do arquivo de nosso código-fonte, para ver sugestões de novas linhas e recuo.
##### Podemos adicionar uma linha como // Cumprimentar o usuário, com duas barras // para indicar que a linha é um comentário e, em seguida, escrever o propósito do nosso código ou programa para nos ajudar a lembrar mais tarde.
##### **check50** irá verificar a exatidão do nosso código com alguns testes automatizados.

#### 🚩Comandos
##### No terminal, podemos digitar **ls**, abreviação de list, para ver uma lista de arquivos e pastas na pasta atual:
````
~ / $ ls
ola* ola.c
````
##### Também podemos remover arquivos com **rm** , com um comando como rm ola. Isso nos solicitará uma confirmação e podemos responder com y ou n para sim ou não.
##### Com **mv** , ou **move** , podemos renomear arquivos. Com mv hello.c goodbye.c , renomeamos nosso arquivo ola.c com o nome goodbye.c
##### Com **mkdir** , podemos criar pastas ou diretórios. Se executarmos mkdir lecture, veremos uma pasta chamada lecture e podemos mover arquivos para diretórios com um comando como mv ola.c lecture/.

#### 🚩Tipos e Códigos de Formato
##### Existem muitos tipos de dados que podemos usar para nossas variáveis, que indicam ao computador que tipo de dados eles representam:

- *bool* , uma expressão booleana verdadeira ou falsa
- *char* , um único caractere ASCII como a ou 2
- *double* , um valor de vírgula flutuante com mais dígitos do que um float
- *float* , um valor de vírgula flutuante ou número real com um valor decimal
- *int* , inteiros até um certo tamanho ou número de bits
- *long* , inteiros com mais bits, para que possam contar mais do que um int
- *string* , uma linha de caracteres

##### E a biblioteca CS50 tem funções correspondentes para obter entrada de vários tipos:

- get_char 
- get_double 
- get_float 
- get_int 
- get_long 
- get_string 

##### Para **printf** , também, existem diferentes marcadores de posição para cada tipo:

- *%c*  para caracteres
- *%f*  para flutuadores, duplos
- *%i*  para ints
- *%li*  para longos
- *%s*  para strings

#### 🚩Operadores, limitações, truncamento
##### Existem vários operadores matemáticos que podemos usar também:

- +  para adição
- -  para subtração
- *  para multiplicação
- /  para divisão
- %  para calcular o resto

##### Faremos um novo programa, additional.c:
````
#include <cs50.h>
#include <stdio.h>

int main(void) 
{
     int x = get_int("x: ");
 
     int y = get_int("y: ");

     printf("%i\n", x + y); 
}
````

##### Vejamos outro exemplo, truncation.c:
````
#include <cs50.h>
#include <stdio.h>

int main (void) 
{
     // Pega os números do usuário
     int x = get_int("x: ");
     int y = get_int("y: ");
     
     // Divide x por y
     float z = x / y;
     printf("%li\n", x + y); 
}
````

#### 🚩Condições
##### Podemos traduzir condições, ou blocos “se”, com:
````
if (x < y)
{
     printf (“x é menor que y\n”); 
}
````
##### Podemos ter condições “if” e “else”:
````
if (x < y)
{
     printf(“x é menor que y\n”); 
}
else
{
    printf(“x não é menor que y\n”); 
}
````
##### Vamos dar uma olhada em outro exemplo, conditions.c:
````
#include <cs50.h>
#include <stdio.h>

int main(void)
{
     // Usuário entra com o valor de x
     int x = get_int(“x: “);

     // Usuário entra com o valor de y
     int y = get_int(“y: “);

     // Compara x e y
     if (x < y)
     {
         printf(“x é menor que y\n”); 
     }
     else if (x > y)
     {
        printf(“x é maior que y\n”); 
     }
     else
     {
        printf(“x é igual a y\n”); 
     }
}
````

#### 🚩Expressões booleanas, loops
##### Poderíamos fazer algo um certo número de vezes com while
````
int i = 0;
while (i < 50)
{
    printf(“Oi mundo!\n”); 
    i++;
}
````
#### 🚩Abstração
##### A abstração aqui leva a um design melhor, já que agora temos a flexibilidade de reutilizar nossa função miau em vários lugares no futuro.
##### Vejamos outro exemplo de abstração, get_positive_int.c:
````
#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
     int i = get_positive_int();
     printf(“%i\n”);
}

// Solicita um número inteiro positivo ao usuário
int get_positive_int(void)
{
     int n;
     do
     {
          n = get_int(“Número positivo: \n”); 
	 }
     while(n < 1);
     return n;
}
````


## Autor 😎

<a href="https://app.rocketseat.com.br/me/sergio-silva-lima-1567192156">
 <img style="border-radius: 50%;" src="https://avatars1.githubusercontent.com/u/48762187?v=4" width="100px;" alt="Sergio SLima"/>
 <br />
 <sub><b>Sergio Silva Lima</b></sub></a> <a href="https://app.rocketseat.com.br/me/sergio-silva-lima-1567192156" title="Rocketseat">🚀
</a>

Desenvolvido por:
Sergio SLima 👋🏽
Entre em contato!

[![Github Badge](https://img.shields.io/badge/-Github-000?style=flat-square&logo=Github&logoColor=white&link=https://github.com/fagnerpsantos)](https://github.com/sergio-slima)
[![Linkedin Badge](https://img.shields.io/badge/-LinkedIn-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/fagnerpsantos/)](https://www.linkedin.com/in/sergio-silva-lima-b99237140/)
[![Instagram Badge](https://img.shields.io/badge/-Instagram-red?style=flat-square&labelColor=red&logo=instagram&logoColor=white&link=https://www.instagram.com/sergio_silva_/)](https://www.instagram.com/sergio_silva_/)
