#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#include "var.h"

using namespace std;

using namespace nsVar;

#define z 5 

#define SQR(a, b) ((a + b) * (a + b))
#define CUBE(a) ((a) * (a) * (a))
#define RESULT_MAX(b,c) ((b)>(c))?(b):(c) 

#define MOD1(a, c) abs(a - c)
#define MOD2(a, c) abs(a + c)
#define RESULT_MIN(abs_m, abs_p) ((abs_m)<(abs_p))?(abs_m):(abs_p) 

#define PRINTI(w) puts("Виведення значень:"); \
 printf(#w" = %d\n",w)

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do
	{
#if z>10 
	{
		puts("Визначаємо більше з двох чисел");
		puts("Введення 2 цілих чисел:");
		scanf_s("%d", &x);
		PRINTI(x);
		scanf_s("%d", &y);
		PRINTI(y);
		kvadr_sum = SQR(x, y);
		PRINTI(kvadr_sum);
		cube = CUBE(x);
		PRINTI(cube);
		w = RESULT_MAX(cube, kvadr_sum);
		PRINTI(w);
	}
#else 
	{
		puts("Визначаємо менше з двох чисел");
		puts("Введення 1 цілого числа:");
		scanf_s("%d", &x);
		PRINTI(x);
		mod1 = MOD1(x, z);
		PRINTI(mod1);
		mod2 = MOD2(x, z);
		PRINTI(mod2);
		w = RESULT_MIN(mod1, mod2);
		PRINTI(w);
	}
#endif 
		puts("Продовжити? Y/N"); ch = _getch();
	} while (ch == 'Y');
}