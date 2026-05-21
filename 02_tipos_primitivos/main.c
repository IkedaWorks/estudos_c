#include <stdio.h>
#include <stdlib.h>

/*
            Tipos Primitivos e Variáveis

    O que são?

    Vou responder essa pergunta usando uma analogia. No mar temos animais como
    o tubarão e a raia. Esses dois animais têm uma characteristic em comum: são
    peixes cartilaginosos, portanto são vertebrados (ossos cartilaginosos). Nesse
    mesmo ecossistema temos os polvos, as ostras e a lesma do mar, que são animais
    conhecidos por ter o corpo mole, já que são invertebrados; eles
    compartilham essa característica em comum. Além desses, temos também as
    medusas, águas-vivas e as anêmonas. Esses animais são conhecidos por serem
    os primeiros animais a desenvolverem o sistema nervoso difuso, um marco na evolução.
    Perceba: todos esses seres vivos fazem parte do mesmo conjunto, o reino animal, mas
    ao mesmo tempo possuem características que os distinguem.

    Na programação temos algo similar a essa situação. A computação inteira é a matéria
    que estuda a informação: "Como usar ela a nosso favor?", "O que esses dados representam
    nessa situação?", entre muitas outras funcionalidades. Mas perceba: é tudo sobre a informação/dados.
    Como informação/dados é algo muito genérico, a gente chama isso formalmente de
    variável — sim, a mesma ideia da matemática, aquilo que muda conforme a situação.
    Aqui não será diferente do reino animal: teremos um parâmetro geral ("a variável"), só
    precisamos classificar para diferenciar os dados entre si. É para isso que servem os tipos
    primitivos.

    Vamos classificá-los:

    - Tipo Integer (int): É o conjunto dos números inteiros. Qualquer informação que atende a
      essa classificação da matemática é uma variável do tipo integer.

    - Tipo Ponto Flutuante (float): É o conjunto dos números reais. Representa dados que são
      números reais, mas têm um limite na precisão deles. Se você precisar de uma precisão
      muito alta, deverá usar o tipo primitivo double.

    - Tipo Double (double): É um tipo float aprimorado para atingir uma precisão maior nas
      casas decimais.

    - Tipo Caractere (char): É o tipo de variável que guarda um caractere como informação.
      Por exemplo, a letra 'a' é um deles. Como o computador não entende letras, já que
      só conversa usando 1 e 0, usamos nessa linguagem a tabela ASCII para converter
      caractere em binário. Desse modo, o compilador traduz a letra em algo que o PC entende.


    SINTAXE DA DECLARAÇÃO:

    Para criar uma variável no C, a regra gramatical exige que você diga o TIPO primeiro,
    depois o NOME dela e, se quiser, já atribui um VALOR usando o sinal de '='.
    Toda linha de comando de declaração precisa terminar com ';'.

    Sintaxe pura: tipo nome_da_variavel = valor;

    EXIBINDO VARIÁVEIS NA TELA:

    - %d -> Para int
    - %f -> Para float (usamos %.2f para limitar a 2 casas decimais)
    - %lf -> Para double (Long Float)
    - %c -> Para char


    Os Especificadores de Formato (Máscaras do printf):

    Para mostrar o valor de uma variável usando o printf(), você precisa usar máscaras
    de formatação (placeholders) que avisam ao compilador qual tipo de dado vai aparecer ali.
    O computador armazena tudo na memória RAM como sequências de bits (0 e 1).
    A função "printf()" é inteligente, mas ela precisa que você diga explicitamente
    COMO ela deve traduzir e exibir esses bits na tela do terminal. É para isso que
    servem os especificadores de formato (as letras que acompanham o sinal de '%').

    Eles funcionam como "guardadores de lugar" no texto. Você coloca a máscara onde
    quer que o dado apareça e, depois que fecha as aspas, passa a variável correspondente.

    - %d (ou %i): Vem de "Decimal/Integer". Avisa ao printf para pegar os bits da RAM e
                  exibi-los como um número inteiro com sinal.

    - %f: Vem de "Float". Avisa para interpretar os bits como um número real (com casas decimais).
          Dica extra: Você pode usar "%.2f" para dizer ao computador: "imprima apenas 2 casas
          decimais e arredonde o resto".

    - %lf: Vem de "Long Float". É a máscara usada para o tipo 'double', já que ele armazena
           o dobro de bits de precisão de um float comum.

           OBS: O printf() também aceita %f para o tipo double, porque no fundo ele também
           é um decimal, mas CUIDADO, essa substituição só vale para as funções printf()
           e fprintf(), que você verá daqui a muito tempo, por isso o padrão ideal e mais profissional
           é sempre usar %lf.

    - %c: Vem de "Character". Avisa ao printf para olhar o número guardado na RAM, ir até a
          Tabela ASCII, descobrir qual caractere corresponde àquele número e desenhar a letra na tela.

          OBS: A tabela ASCII é o padrão do C. Se você for para outras linguagens, essa tabela pode
          ser diferente; no Python, por exemplo, usa-se a tabela Unicode.
*/

int main()
{
    // Criando (declarando) as variáveis na memória RAM
    int idade = 21;
    float nota_calculo = 8.5;
    double constante_gravitacional = 0.00000000006674;
    char inicial_nome = 'F';

    // Exibindo os dados de forma organizada no terminal
    printf("--- Laboratorio de C: Variaveis e Tipos ---\n\n");

    printf("Minha idade eh: %d anos\n", idade);
    printf("Minha nota em Calculo foi: %.1f\n", nota_calculo);
    printf("Constante da Fisica: %lf\n", constante_gravitacional);
    printf("A inicial do meu nome eh: %c\n", inicial_nome);

    printf("\n------------------------------------------\n");
    return 0;
}
