#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int A,B,C;
	char op1, op2;
	float delta;
	printf("Digite A, B e C da equacao.\n");
	scanf("%d %d %d", &A, &B, &C);
	if(B >= 0)
	{
		op1 = '+';
	}
	else
	{
		op1 = ' ';
	}
	if (C >= 0)
	{
		op2 = '+';
	}
	else
	{
		op2 = ' ';
	}
	printf("encontrar as raizes da equacao ");
	if(A != 1)
	{
		printf("%dx%c%c%dx%c%d \n", A, 253, op1, B, op2, C);
	}
	else
	{
		printf("x%c%c%dx%c%d \n", 253, op1, B, op2, C);
	}
	system("pause");
	system("cls");
	delta = B*B - 4*A*C;
	if(delta >= 0)
	{
		printf("Raiz de x%c = %.5f\n", 251, (B*(-1)+sqrt(delta))/2*A);
		printf("Raiz de x%c = %.5f\n", 253, (B*(-1)-sqrt(delta))/2*A);
	}
	else
	{
		printf("Nao existe valor real para X.\n");
	}
	system("pause");
}
