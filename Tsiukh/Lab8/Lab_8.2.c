#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


int* getElementID1(int arr[], int index) {
	if (index < 0 || index >= 10) {
		return NULL;
	}

	return &arr[index];
}

int* getElementID2(int arr[12][12], int row, int col) {
	if (row < 0 || row >= 12 || col < 0 || col >= 12) {
		return NULL;
	}

	return &arr[row][col];
}


int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	srand((unsigned int)time(NULL));


	printf("Частина а:\n");

	int arrID1[10];
	printf("Одновимірний масив з 10 елменетів:\n");
	for (int i = 0; i < 10; i++) {
		arrID1[i] = rand() % 100;
		printf("%d\n", arrID1[i]);
	}

	int index;
	printf("Введіть індекс для пошуку елемента в одновимірному масиві:");
	scanf_s("%d", &index);

	int* ptrID1 = getElementID1(arrID1, index);
	if (ptrID1 != NULL) {
		printf("Знайдено адресу елмененту з індексом %d: %p\n", index, (void*)ptrID1);
	}
	else {
		printf("Елемент з індексом %D не знайдено(повернуто NULL)\n", index);
	}

	printf("Частина б:");

	int arrID2[12][12];
	printf("Двовимірний масив 12х12:\n");
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			arrID2[i][j] = rand() % 100;
			printf("%3d", arrID2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int row, col;

	printf("Введіть індекс рядка та ствопця через пробіг: ");
	scanf_s("%d %d", &row, &col);

	int* ptrID2 = getElementID2(arrID2, row, col);
	if (ptrID2 != NULL) {
		printf("Знайдено адресу елементу з індексом [%d][%d]: %p", row, col, (void*)ptrID2);
	}
	else {
		printf("Елемент з індексом [%d] [%d] не знайдено(повернуто NULL)\n", row, col);
	}

	return 0;
}