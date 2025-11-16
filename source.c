#include <stdio.h>
#include <locale.h>
#define SIZE 10
double max(double* ptr, int k, int m);

int main() {

	double mas[SIZE];
	int k, m;

	setlocale(LC_ALL, "RUS");

	printf("Введите массив: ");
	for (int i = 0; i < SIZE; i++) {
		scanf("%lf", &mas[i]);
	}

	printf("Введите k и m");
	scanf("%d %d", &k, &m);

	printf("%lf", max(mas, k, m));
}
double max(double* ptr, int k, int m) {
	double rez = -1;

	for (int i = k; i <= m; i++) {
		rez = *(ptr + i) > rez ? *(ptr + i) : rez;
	}
	return rez;
}