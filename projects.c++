//exercicio 6: Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
//A formula de conversões: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura
// em Celsius.

//biblioteca
#include<stdio.h>

//funçao principal
int main(void)
{
	//declaração de variáveis
	float F, c;
	printf("Digite o valor da temperatura em graus Celsius: ");
	scanf("%f", &c);	
	F = c * (9.0 / 5.0) + 32.0;
	printf("A temperatura em Fahrenheit fica: %f",F);
}


//exercicio 7: Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus
// Celsius. A formula de conversão: C = 5.0 * (F - 32.0)/9.0, sendo C a temperatura em Celsius 
//e F a temperatura em Fahrenheit.

//biblioteca
#include<stdio.h>

//função principal
int main (void)
{
	//Declaração de variáveis
	float F,c;
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",&F);
	c = 5.0 * (F - 32.0) / 9.0;
	printf("A temperatura em Celsius: %f",c);
}


//exercicio 8: Leia uma temperatura em graus Kelvin e apresente-a convertida em graus
// Celsius. A formula de conversão é: C = K - 273.15, sendo C a temperatura em Celsius
// e K a temperatura em Kelvin.

//biblioteca
#include<stdio.h>

//função principal
int main (void)
{
	//Declaração de variáveis
	float k, c;
	printf("Digite a temperatura em graus Kelvin: ");
	scanf("%f",&k);
	c = k - 273.15;
	printf("A temperatura em Celsius: %2.3f",c);
}

//exercicio 9: Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
//formula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

//biblioteca
#include<stdio.h>

//função principal
int main(void)
{
	//Declaração de variáveis
	float c,k;
	printf("digite a temperatura em Celsius: ");
	scanf("%f",&c);
	k = c + 273.15;
	printf("a temperatura em Kelvin vai ser: %2.3f",k);
}

//exercicio 10: Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida 
//em m/s (metros por segundo). A formula de conversão é: M = K/3.6, sendo K a velocidade em
//km/h e M em m/s.


//biblioteca 
#include<stdio.h>

//função principal
int main(void)
{
	//declaração de variáveis
	float k, m;
	printf("Digite a valocidade em quilometros por hora: ");
	scanf("%f",&k);
	m = k / 3.6;
	printf("A valocidade em metros por segundo: %2.3f",m);
}
