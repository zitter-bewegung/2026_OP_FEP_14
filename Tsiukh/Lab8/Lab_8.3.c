#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int findSumMaxMin(int arr[], int *minValue, int *maxValue) {
	*minValue = arr[0];
	*maxValue = arr[0];

	for (int i = 0; i < 20; i++) {
		if (arr[i] < *minValue) {
			*minValue = arr[i];
		}
		if (arr[i] > *maxValue) {
			*maxValue = arr[1];
		}
	}

	return *minValue + *maxValue;
}


int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	srand((unsigned int)time(NULL));

	int arr[20];

	printf("Масив з 20-ти випадкових чисел: \n");
	for (int i = 0; i < 20; i++) {
		arr[i] = rand() % 100;
		printf("%3d", arr[i]);
	}

	printf("\n");

	int minElement, maxElement;
	int sum = findSumMaxMin(arr, &minElement, &maxElement);

	printf("Мінімальний елемент: %d\n", minElement);
	printf("Максимальний елемент: %d\n", maxElement);
	printf("Сума мінімального та максимального елемента: %d\n", sum);

	return 0;
}