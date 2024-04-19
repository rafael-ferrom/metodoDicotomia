#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

float formar_func(float x, float *coeficiente, int n);
float CalculaValorK(float a, float b, float erro);

 main() 
 {
 	
	 
    float a, b, pm, erro, coeficiente[7];
    int rep = 0, k, n;
    char resp;
    
    float *val_a = NULL;
    float *val_b = NULL;
    
	val_a = (float *)malloc(n * sizeof(float));
	val_b = (float *)malloc(n * sizeof(float));
	
	do
	{
		
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    fflush(stdin);
    
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    fflush(stdin);
    
    printf("Digite o erro toleravel: ");
    scanf("%f", &erro);
    fflush(stdin);
    
    k = CalculaValorK(a,b,erro);
    
    
    printf("Digite o numero de termos do polinomio (ate 6): ");
    scanf("%d", &n);
    fflush(stdin);
    
    printf("Digite os coeficientes do polinomio, em ordem crescente de potencia:\n");
    
    for (int i = 0; i < n; i++) 
	{
        scanf("%f", &coeficiente[i]);
        fflush(stdin);
    }//for
    
    
    printf("\nrepeticao\t a\t b\t pm\t f(a)\t\t f(b)\t\t f(c)\t\n");
    
     for (int i = 1; i <= k; i++) 
	 {
        pm = (a+b)/2;
        rep++;
        printf("%d\t\t %.3f\t %.3f\t %.3f\t %.3f\t %.3f\t %.3f\t\n"
		, rep, a, b, pm, formar_func(a, coeficiente, n), formar_func(b, coeficiente, n), 
		formar_func(pm, coeficiente, n));
        
		if (formar_func(pm, coeficiente, n) == 0) 
		{
            break;
        }//if
        else if (formar_func(a, coeficiente, n)*formar_func(pm, coeficiente, n) < 0) 
		{
            b = pm;
        }//else if
        else 
		{
            a = pm;
        }//else
        if (fabs(a-b) <= erro) {
            break;
        }
    }//for

    printf("Raiz encontrada em %d interacoes: %f\n", rep, pm);
    
    printf("\ndeseja repetir o processo ?\n");
    scanf("%c",&resp);
    fflush(stdin);
    
	} while (resp == 's' || resp == 'S');
}//main

float CalculaValorK(float a, float b, float erro)

{
	
float fValorK;

fValorK = (log10(b-a) - log10(erro))/(log10(2));
return ceil(fValorK);

}//calcularValorK

float formar_func(float x, float* coeficiente, int n) {
    
    float result = 0;
    for (int i = 0; i < n; i++) 
	{
        result += coeficiente[i] * pow(x, i);
    }//for
    return result;
    
}//formar_func
