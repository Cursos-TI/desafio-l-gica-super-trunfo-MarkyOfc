🃏 Super Trunfo - Cidades e Estados
Um jogo interativo de Super Trunfo baseado em cidades brasileiras. O usuário insere informações de duas "cartas" e escolhe atributos para comparar. O programa calcula os valores e determina qual carta vence com base na pontuação.

📦 Requisitos
Compilador C (GCC recomendado)

Terminal ou console interativo

⚙️ Como compilar
Use o comando abaixo no terminal para compilar o programa:

bash
Copiar
Editar
gcc -o super_trunfo super_trunfo_logica\ copy.c
Obs.: Renomeie o arquivo se necessário para evitar espaços no nome (ex: super_trunfo_logica.c).

▶️ Como executar
Após a compilação, execute com:

bash
Copiar
Editar
./super_trunfo
📝 Como jogar
1. Inserção de dados
Você será guiado para digitar informações de duas cartas. Para cada carta, você deverá fornecer:

Letra do estado (de A a H)

Código da carta (ex: A01, B03)

Nome da cidade

População

Área em km²

PIB

Quantidade de pontos turísticos

2. Atributos disponíveis para comparação
Após inserir os dados das duas cartas, você escolherá dois atributos distintos para comparar entre elas:

java
Copiar
Editar
1 - Nome da cidade (não é comparado numericamente)
2 - População
3 - Área
4 - PIB
5 - Número de pontos turísticos
6 - Densidade demográfica
❗ O atributo 1 (Nome da cidade) é apenas exibido, mas não afeta o resultado final.

3. Resultado
O programa calcula a soma dos dois atributos escolhidos para cada carta e declara a vencedora com base na pontuação total.

🧮 Fórmulas usadas
Densidade populacional = população / área

PIB per capita = PIB / população

Superpoder = (população + área + PIB + pontos turísticos + PIB per capita) - densidade

O superpoder é exibido, mas não interfere diretamente na comparação final.

📌 Exemplo de uso do menu
mathematica
Copiar
Editar
*** QUAL O PRIMEIRO ATRIBUTO SERÁ USADO PARA A COMPARAÇÃO? ***
2 - População

*** QUAL SERÁ O SEGUNDO ATRIBUTO USADO PARA A COMPARAÇÃO? ***
4 - PIB

CARTA 01: POPULAÇÃO - 500000 /// CARTA 02: POPULAÇÃO - 450000
CARTA 01: PIB - 120000.00 /// CARTA 02: PIB - 110000.00

A CARTA 1 VENCE COM A PONTUAÇÃO TOTAL DE: 620000.00 PONTOS!
👨‍💻 Autor
Desenvolvido por [Seu Nome Aqui]
Licença: MIT
