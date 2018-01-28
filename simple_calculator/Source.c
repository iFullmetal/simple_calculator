#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
char del[1] = "/";
char mn[1] = "*";
char plus[1] = "+";
char minus[1] = "-";
void main()
{
	setlocale(LC_ALL, "Russian");
	while (1) {
		
		printf("\nВведите первый операнд:");
		int first;
		scanf_s("%d", &first);
		printf("\nВведите второй операнд:");
		int second;
		scanf_s("%d", &second);
		printf("\nВыберите операцию(/, *, -, +):");
		getchar();
		char operator_str[5];

		scanf_s("%s", operator_str, 5);
		char op = operator_str[0];
		op == del[0] ? printf("\n%d", (first / second)) : 
			op == mn[0] ? printf("\n%d", (first * second)) : 
			op == minus[0] ? printf("\n%d", (first - second)) :
			op == plus[0] ? printf("\n%d", (first + second)) :
			printf("\nВы ввели не то!");
	}
	system("pause");
}