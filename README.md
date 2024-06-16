Visão Geral
Este programa implementa o Método da Bisseção para encontrar a raiz de uma função polinomial. O Método da Bisseção é um método numérico para resolver equações da forma 
𝑓
(
𝑥
)
=
0
f(x)=0. Ele divide repetidamente um intervalo e seleciona um subintervalo no qual uma raiz deve estar presente para processamento adicional.

Funcionalidades
Aceita uma função polinomial do usuário.
Utiliza o Método da Bisseção para encontrar a raiz do polinômio.
Permite ao usuário especificar o intervalo 
[
𝑎
,
𝑏
]
[a,b] e o erro tolerável.
Exibe os passos intermediários e o resultado final.
Oferece a opção de repetir o processo.
Arquivos
main.c: Contém a lógica principal do programa e as funções.
Funções
float formar_func(float x, float *coeficiente, int n)
Calcula o valor do polinômio para um dado 
𝑥
x.

Parâmetros:
x: O ponto no qual avaliar o polinômio.
coeficiente: Um array de coeficientes do polinômio.
n: O número de termos do polinômio.
Retorna: O valor do polinômio em 
𝑥
x.
float CalculaValorK(float a, float b, float erro)
Calcula o número de iterações necessárias para o Método da Bisseção convergir dentro do erro especificado.

Parâmetros:
a: O limite inferior do intervalo.
b: O limite superior do intervalo.
erro: O erro tolerável.
Retorna: O número de iterações necessárias.

Inserir Dados:

Insira o valor de 
𝑎
a.
Insira o valor de 
𝑏
b.
Insira o erro tolerável.
Insira o número de termos do polinômio (até 6).
Insira os coeficientes do polinômio em ordem crescente de potência.
Ver Resultados:
O programa exibirá os passos intermediários e a raiz encontrada dentro do erro especificado.

Repetir o Processo:
Após exibir os resultados, o programa perguntará se você deseja repetir o processo. Insira s ou S para repetir, ou qualquer outra tecla para sair.
