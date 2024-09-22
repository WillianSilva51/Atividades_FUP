#include <stdio.h>

int Fibonacci(int porta)
{
	int numeracao = 0;

	if (porta == 1 || porta == 2)
		return 1;

	for (int i = 3, anterior = 1, posterior = 1; i <= porta; i++)
	{
		numeracao = anterior + posterior;

		anterior = posterior;

		posterior = numeracao;
	}

	return numeracao;
}

int main()
{
	int porta = 0;

	scanf("%d", &porta);

	printf("%d\n", Fibonacci(porta));

	return 0;
}