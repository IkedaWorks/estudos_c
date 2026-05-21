#include <stdio.h>
#include <stdlib.h>

/*
                    Conceitos Iniciais: Seu primeiro Programa em C

    Objetivo: entender a estrutura mais básica da linguagem.

    Antes de tudo você precisa entender que o C é uma linguagem como o Inglês, por exemplo.
    Enquanto o inglês você usa para se comunicar com pessoas que moram nos EUA, UK e outros países,
    você usa a linguagem C para se comunicar com o seu computador. Basicamente é para isso que servem
    linguagens de programação: comunicar com a máquina.

    Entendido isso, vamos começar a conversar com o computador. Para você conseguir fazer isso, você precisa
    seguir um conjunto de regras que chamamos formalmente de sintaxe da linguagem. Por exemplo, no português
    temos a regra que diz que devemos colocar um '.' no final da frase para indicar a conclusão — isso é a sintaxe da
    linguagem portuguesa. O computador só entende 1 e 0, então para você se comunicar com ele precisaria digitar
    sequências de 1 e 0. Como essa tarefa é repetitiva, trabalhosa e ineficiente para nós humanos, criamos
    linguagens de programação para fazer o intermediário entre nós e o computador. Então, escrevemos o que
    queremos que o computador faça em linguagem C e depois usamos um compilador (software que traduz
    essa linguagem intermediária em linguagem binária) para o computador entender o que você quer.

    Na linguagem C, uma regra primordial para você conversar com o computador é incluir
    no topo do seu código o "#include <stdio.h>". Essa linha diz para o computador importar a biblioteca
    onde estão as instruções das funções de entrada e saída de dados. Sem ela, você não consegue conversar com
    o computador.

    Depois de estruturar o ambiente, criamos o bloco principal por onde o computador começa a ler seu programa:
    int main(){
        return 0;
    }
    Esse bloco acima é uma estrutura chamada função, cujo nome é main. É dentro dela, entre a primeira "{"
    e o "return 0;", que você digitará o conjunto de instruções que você quer que o computador faça.

    Vamos digitar a sua primeira instrução. Para esse momento histórico, vamos usar uma outra função
    chamada "printf()". Ela serve para o computador imprimir informações na tela do terminal (o local onde
    ele responde você). Digite:

    printf("Hello World\n");

    Parabéns, você digitou seu primeiro hello world!

    Outro conceito básico no C são os comentários.
    Eles servem para organizar o seu código para você e para futuros colaboradores que irão mexer nesse código,
    sendo um conceito muito importante de forma geral para todas as linguagens de programação. Eles são:

    Comentário de bloco (mais de 1 linha): É o que estou fazendo nessa parte do texto. Declarei uma / seguida de *
    e fechei com * seguido de /

    Comentário inline (1 linha):
    Serve para frases curtas que cabem em apenas 1 linha!
    Sintaxe: declare // e em seguida digite sua frase.
*/

// Isto é um comentário inline

int main()
{
    printf("Hello world!\n");
    // O '\n' serve para pular uma linha após esse texto
    return 0;
}
