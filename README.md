# Super Trunfo | Desenvolvendo a lógica do jogo

## Como compilar e executar

- Para compilar basta executar o seguinte código em seu terminal: `gcc logicaSuperTrunfo.c -o <nome-desejado-para-o-executavel>`
- Para executar basta executar o seguinte código em seu terminal: `./<nome-do-executavel>`

## Exemplo de Execução

### Cadastro das Cartas

Após a execução, o programa irá solicitar os dados para cadastro da *primeira carta*:
```Plain text
Informe o código do estado: PE
Informe o código da carta: RCF
Informe o nome da cidade (separado por _ se for nome composto): Recife
Informe a quantidade de habitantes: 200
Informe a quantidade de pontos turísticos: 10
Informe a área da cidade em Km²: 15
Informe o PIB: 200
```
Em seguida, o programa irá apresentar as informações cadastradas para a primeira carta:

```Plain text
Código do Estado: PE
Código da Carta: RCF
Cidade: Recife
Número de Habitantes: 200
Número de Pontos Turísticos: 10
Área: 15.00 Km²
PIB: R$ 200.00
Densidade Populacional: 13.33 Habitantes por Km²
PIB Per Capita: R$ 1.00
```
Em seguida, a mesma sequência de prompts será feita para o cadastro dos dados da **segunda carta** seguida da mesma resposta.

### Escolha dos atributos disponíveis

O primeiro menu a ser mostrado possui *todas* as opções de escolha do **primeiro atributo** de comparação, e surge logo após o preenchimento dos prompts de cadastro dos dados das cartas:
    
  ```Plain Text
    *** Escolha o primeiro atributo para comparar ***
    1- Nº de Habitantes
    2- Nº de Pontos Turísticos
    3- Área
    4- PIB
    5- Densidade Populacional
    6- PIB Per Capita
    7- Super Poder
    Digite o número associado à opção desejada: 
  ```
Em seguida o mesmo menu é apresentado para a escolha do **segundo atributo** de comparação, porém sem a opção que foi escolhida anteriormente. Por exemplo, se no menu anterior você tivesse escolhido a opção `3` o próximo menu seria como segue:

  ```Plain Text
  *** Escolha o primeiro atributo para comparar ***
  1- Nº de Habitantes
  2- Nº de Pontos Turísticos
  4- PIB
  5- Densidade Populacional
  6- PIB Per Capita
  7- Super Poder
  Digite o número associado à opção desejada: 
  ```
### Apresentação das escolhas e dos resultados

Após o cadastro das duas cartas e da escolha dos dois atributos de comparação o programa apresenta os resultados da seguinte forma:

```Plain text
*** Recife x Caruaru ***
Primeiro atributo escolhido: Área
Segundo atributo escolhido: Densidade Populacional

Primeiro atributo: Atributo escolhido: Área
recife: 15.00
caruaru: 24.00

Segundo atributo: Atributo escolhido: Densidade Populacional
recife: 13.33
caruaru: 3.12

Soma da 1ª Carta: 28.33
Soma da 2ª Carta: 27.12

A carta 1 venceu!
```