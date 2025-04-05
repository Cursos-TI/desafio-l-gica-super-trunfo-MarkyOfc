#include <stdio.h>

char estado1, estado2;
char codcarta1[3], codcarta2[3];
char cidade1[150], cidade2[150];

unsigned long int populacao1, populacao2;
int pontostur1, pontostur2;     // VARIAVEIS 1 E 2 SEPARADAS EM CHAR, INT E FLOAT

float area1, area2, pib1, pib2;
float densipopula1, densipopula2;
float pibcapta1, pibcapta2;

float superpoder1, superpoder2;
float result1, result2;
int resultcomparacao;

int escolhaDecisao; //USADA MAIS À FRENTE, PARA O MENU INTERATIVO.

int main(){

        printf("*********** Olá! Vamos jogar SUPER TRUNFO! ***********\n *********** DIGITE AS INFORMAÇÕES PEDIDAS DAS SUAS 2 CARTAS! ***********\n");
    printf("--- Vamos começar! ---\nCARTA 01:\n");

        printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf(" %s", &estado1);

        printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", &codcarta1);

        printf("Digite o nome da cidade.\n");
    scanf("%s", &cidade1);

        printf("Digite o número de habitantes da cidade.\n");
    scanf("%ld", &populacao1);

        printf("Digite a área da cidade em quilômetros quadrados(km²).\n");
    scanf("%f", &area1);

        printf("Digite o Produto Interno Bruto da cidade(PIB).\n");
    scanf("%f", &pib1);

        printf("Digite a quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontostur1);


    printf("*** RESULTADO CARTA 01: ***");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s",codcarta1);
    printf("\nCidade: %s",cidade1);
    printf("\nPopulação: %ld",populacao1);                   // INFORMAÇÕES DA 1ª CARTA !!!
    printf("\nÁrea: %.2f",area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos turisticos: %d", pontostur1);

        densipopula1 = (populacao1 / area1);                // CALCULA DENSIDADE POPULACIONAL (POPULAÇÃO / ÁREA)
    printf("\nDensidade Populacional: %.2f Hab/por km².", densipopula1);

        pibcapta1 = (pib1 / populacao1);                    // CALCULA PIB PER CAPITA (PIB / POPULAÇÃO)
    printf("\nPIB per capita: %.2f reais.", pibcapta1);

        superpoder1 = ((populacao1 + area1 + pib1 + pontostur1 + pibcapta1) - densipopula1); // CALCULA O SUPERPODER DA CARTA
    printf("\nValor do SUPER PODER: %.2f", superpoder1);

    // ----- FIM DA PRIMEIRA CARTA -----

    printf("\n*********** AGORA, A PRÓXIMA CARTA! ***********\nCARTA 02:\n"); // <------------ PRINTF E SCANF CARTA Nº 2 !!!

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    scanf(" %s", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", &codcarta2);

    printf("Digite o nome da cidade.\n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes da cidade.\n");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados(km²).\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade(PIB).\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontostur2);

    printf("*** RESULTADO CARTA 02: ***\nEstado: %c", estado2);
    printf("\nCódigo: %s",codcarta2);
    printf("\nCidade: %s",cidade2);
    printf("\nPopulação: %ld",populacao2);                   // INFORMAÇÕES DA 2ª CARTA !!!
    printf("\nÁrea: %.2f",area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos turisticos: %d", pontostur2);

        densipopula2 = (populacao2 / area2);                // CALCULA DENSIDADE POPULACIONAL (POPULAÇÃO / ÁREA)
    printf("\nDensidade Populacional: %.2f Hab/por km².", densipopula2);

        pibcapta2 = (pib2 / populacao2);                    // CALCULA PIB PER CAPITA (PIB / POPULAÇÃO)
    printf("\nPIB per capita: %.2f reais.", pibcapta2);

        superpoder2 = ((populacao2 + area2 + pib2 + pontostur2 + pibcapta2) - densipopula2); // CALCULA O SUPERPODER DA CARTA
    printf("\nValor do SUPER PODER: %.2f\n", superpoder2);
    // ----- FIM DA SEGUNDA CARTA -----


    // A SEGUIR O CÓDIGO USA SWITCH - CASE PARA COMPARAR AS CARTAS E DAR O RESULTADO FINAL

    printf("*** AGORA VAMOS ESCOLHER: ***\n");
    printf("*** QUAL ATRIBUTO SERÁ USADO PARA A COMPARAÇÃO? ***\n***ESCOLHA UM NÚMERO DE 1 à 6!***\n");
    printf("1 - Nome do país (**APENAS NOMES, SEM COMPARAÇÃO!**)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    scanf("%d", &escolhaDecisao);

    switch (escolhaDecisao) 
    {

        case 1:
            printf("Carta 1: %s - Carta 2: %s", cidade1, cidade2);
        break;

        case 2:
            if (populacao1 > populacao2) {
                printf("A CARTA 1 VENCE COM A POPULAÇÃO DE: %d PESSOAS!\n", populacao1);
            } else if (populacao1 < populacao2)
            {
                printf("A CARTA 2 VENCE COM A POPULAÇÃO DE: %d PESSOAS!\n", populacao2);
            } else {
                printf("***É UM EMPATE!***\n");
            }
        break;

        case 3:
            if (area1 > area2) {
            printf("A CARTA 1 VENCE COM A ÁREA DE: %.2f KM²!\n", area1);
        } else if (area1 < area2)
        {
            printf("A CARTA 2 VENCE COM A ÁREA DE: %.2f KM²!\n", area2);
        } else {
            printf("***É UM EMPATE!***\n");
        }
        break;

        case 4:
            if (pib1 > pib2) {
            printf("A CARTA 1 VENCE COM O PIB DE: %.2f!\n", pib1);
        } else if (pib1 < pib2)
        {
            printf("A CARTA 2 VENCE COM O PIB DE: %.2f!\n", pib2);
        } else {
            printf("***É UM EMPATE!***\n");
        }
        break;

        case 5:
            if (pontostur1 > pontostur2) {
            printf("A CARTA 1 VENCE COM A QUANTIDADE DE: %d PONTOS TÚRISTICOS TOTAIS!\n", pontostur1);
        } else if (pontostur1 < pontostur2)
        {
            printf("A CARTA 2 VENCE COM A QUANTIDADE DE: %d PONTOS TÚRISTICOS TOTAIS!\n", pontostur2);
        } else {
            printf("***É UM EMPATE!***\n");
        }
        break;

        case 6:
            if (densipopula1 < densipopula2) {
            printf("A CARTA 1 VENCE COM A DENSIDADE POPULACIONAL DE: %.2f HAB/KM²!\n", densipopula1);
        } else if (densipopula1 > densipopula2)
        {
            printf("A CARTA 2 VENCE COM A DENSIDADE POPULACIONAL DE: %.2f HAB/KM²!\n", densipopula2);
        } else {
            printf("***É UM EMPATE!***\n");
        }
        break;

        default:
            printf("*** OPÇÃO INVÁLIDA! ***\n");
        break;
    }

    printf("\n********** FIM DE JOGO **********");

    return 0;
}
