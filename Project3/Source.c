#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>
void main(void) {
	setlocale(LC_ALL, "rus");
	/*int a, b;
	printf("\n Введите числа а и б, б меньше a\n");
	scanf_s("%i %i", &a, &b);
	if (b < a) {
		for (int i = a; i > b; i--)
		{
			printf("\n %i\n", i);
		}
	}
else
		printf("Ошибка ввода");*/
		/*int b, k, t;
		for (b = 0; b <= 100; b++) {
			for (k = 0; k <= 100; k++) {
				t = 100 - b - k;
				if (t >= 0) {
					if (10 * b + 5 * k + 0.5*t == 100)
						printf("\n Быков %i Коров %i Телят %i ", b, k, t);
				}
			}
		}*/
		/*int mark, n;
		int count = 20;
		int sum = 0;
		double s;
		printf("\n Введите систему оценивания \n");
		scanf_s("%i", &mark);

			for (int i = 1; i <= count; i++) {
				do {
					printf("\n Введите оценку %i ученика ", i);
					scanf_s("%i", &n);
					if (n < 1 || n > mark) printf("\n Ошибка! Оценка должна быть %i бальной ",mark);
				} while (n < 1 || n > mark);
					sum += n;
				}

		s = sum / count;
		printf("\n Средняя оценка равняется %.2f ", s);*/
		/*int a = 1, b = 1, c;
		int sum = a + b;
		while (1) {
			c = a + b;
			if (c > 100) break;
			sum += c;
			a = b;
			b = c;

		}
		printf("\n Сумма всех чисел Фибонначи,не превосходящих 100: %d", sum);*/
		/*int n, a, count = 0, last;
		printf("\n Введите натуральное число \n");
		scanf_s("%i", &n);
		printf("\n Введите цифру \n");
		scanf_s("%i", &a);
		if (a<0 || a>9) printf("\n Ошибка ввода \n");
		else {
			while (n > 0) {
				last = n % 10;
				if (last == a)
					count++;
				n /= 10;
			}
			printf("\n Цифра %d встречается %d раз(а) \n",a,count);
		}
		*/
	_getch();
}