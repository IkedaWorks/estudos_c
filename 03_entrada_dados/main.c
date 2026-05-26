#include <stdio.h>
#include <stdlib.h>

/*
            Leitura de Dados e o Fluxo de Entrada (scanf)

    O que é?

    Para entender o que é a leitura de dados, vamos usar uma analogia. Imagine
    um grande reservatório de água que abastece uma cidade. A água não sai direto
    da nuvem para a torneira da sua casa; ela passa por uma represa, fica guardada
    ali em um "buffer" (um reservatório temporário) e, quando você abre a torneira
    da sua cozinha, a água flui por encanamentos específicos até preencher o copo
    que está posicionado exatamente embaixo da saída de água.

    Na programação ocorre o mesmo processo. Até agora, suas variáveis eram como
    água congelada direto no código: valores estáticos (`idade = 21`). A computação
    só se torna dinâmica quando o programa interage com o ambiente externo. Para
    isso, o C usa o fluxo de entrada padrão, chamado de "stdin" (Standard Input).
    Quando o usuário digita algo no teclado e aperta "Enter", esses dados não vão
    direto para a variável; eles ficam guardados em um reservatório temporário (o
    buffer do teclado gerenciado pelo Sistema Operacional).

    A função `scanf()` (Scan Formatted / Varredura Formatada) é a torneira. Ela vai
    até esse reservatório, puxa os dados que estão lá e os despeja na variável que
    você escolher. Mas, para o dado cair no lugar certo, o `scanf()` precisa saber o
    "endereço do copo". É aí que entra a grande virada de chave do C.


    COMO FUNCIONA NA MEMÓRIA E O OPERADOR DE ENDEREÇO (&):

    Se você tentar usar o `scanf` passando apenas o nome da variável, o programa vai
    quebrar (gerando um erro crítico chamado Segmentation Fault) ou ignorar a leitura.
    Por que?

    Quando você chama uma função comum e passa uma variável (como no `printf(idade)`),
    o C faz uma cópia do valor daquele dado e envia para a função. O `printf` só precisa
    saber o valor para desenhar na tela. Mas o `scanf` tem a missão de ALTERAR o valor
    da sua variável. Ele não quer uma cópia do valor antigo; ele precisa saber em qual
    lugar físico da memória RAM a sua variável está guardada.

    O símbolo '&' em C é o OPERADOR DE ENDEREÇO. Quando você coloca ele colado no nome
    da variável (`&idade`), você está dizendo ao compilador: "Não te dei o valor de idade,
    te dei a coordenada da memória RAM (o endereço físico) onde a variável idade está
    sediada". Sabendo o endereço, o `scanf` vai lá e substitui os bits antigos pelos novos
    bits que o usuário digitou.


    SINTAXE DA DECLARAÇÃO E USO:

    A regra gramatical do `scanf` exige a máscara/especificador de formato entre aspas
    para identificar que tipo de dado está vindo do buffer, seguido por uma vírgula
    e o operador `&` grudado na variável que vai receber o dado.

    Sintaxe pura: scanf("%especificador", &nome_da_variavel);


    MÁSCARAS DE FORMATO NO SCANF:

    - %d -> Lê os caracteres do buffer e os converte em um número inteiro (int).
    - %f -> Lê os caracteres e os converte em ponto flutuante de precisão simples (float).
    - %lf -> Lê os caracteres e os converte em ponto flutuante de precisão dupla (double / Long Float).
    - %c -> Lê o próximo caractere isolado do buffer (char).

    CUIDADO PROFISSIONAL COM O %lf E %f:
    Lembra que no `printf` você podia usar `%f` tanto para float quanto para double?
    No `scanf` isso é PROIBIDO. Como o `scanf` trabalha direto manipulando os bytes
    na memória RAM, ele precisa saber o tamanho exato do espaço onde vai escrever:
    Se você usar `%f` para ler um double, o `scanf` vai tentar escrever um dado de
    64 bits em um formato que ele acha que tem 32 bits, destruindo a memória e corrompendo
    os dados. Portanto: use obrigatoriamente `%f` para float e `%lf` para double.


    ONDE E QUANDO USAR:

    A leitura via `scanf` é usada sempre que você precisa receber entradas textuais ou
    numéricas diretas do usuário via terminal para tomar decisões no código. No entanto,
    como ele é uma ferramenta de baixo nível, ele tem comportamentos peculiares: ele ignora
    espaços e quebras de linha automaticamente quando lê números (`%d`, `%f`), mas quando
    vai ler caracteres (`%c`), ele captura até mesmo o "Enter" (`\n`) que sobrou da leitura
    anterior se o buffer não for tratado.
*/

//Exemplo baseado em uma situação real:

int main()
{
    // Inicialização limpa e defensiva de variáveis (Padrão Sênior)
    int codigo_rastreio = 0;
    float peso_kg = 0.0f;
    double taxa_importacao = 0.0;

    printf("--- Sistema de Logistica Internacional - Triagem ---\n\n");

    // 1. Entrada de dados do tipo Inteiro (ID de controle)
    printf("Digite o codigo numérico de rastreio: ");
    scanf("%d", &codigo_rastreio);

    // 2. Entrada de dados do tipo Float (Massa da mercadoria)
    printf("Informe o peso da carga em quilogramas (kg): ");
    scanf("%f", &peso_kg);

    // 3. Entrada de dados do tipo Double (Fator multiplicador alfandegário)
    printf("Insira a taxa de importacao aplicada (ex: 0.60 para 60%%): ");
    scanf("%lf", &taxa_importacao);

    // Processamento lógico da triagem
    //você verá operações aritmética na próximo tópico
    float peso_gramas = peso_kg * 1000.0f;

    // Saída de dados limpa e com formatação de negócios
    printf("\n----------------------------------------------------\n");
    printf(">> Manifesto de Carga Processado com Sucesso:\n");
    printf("Encomenda ID: #%d\n", codigo_rastreio);
    printf("Peso Registrado: %.3f kg (Equivale a: %.1f g)\n", peso_kg, peso_gramas);
    printf("Aliquota Tributaria: %.2lf%%\n", taxa_importacao * 100.0);
    printf("----------------------------------------------------\n");

    return 0;
}
