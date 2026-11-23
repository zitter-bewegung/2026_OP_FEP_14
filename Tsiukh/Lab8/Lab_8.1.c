#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>


int* generateArray() {
	int *arr =  (int*)malloc(10 * sizeof(int));

	if (arr == NULL) {
		return NULL;
	}

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}

	return arr;
}



int main() {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	srand((unsigned int)time(NULL));

	int *myArray = generateArray();

	if (myArray == NULL) {
		printf("Помилка виділення пам'яті\n");
		return 1;
	}

	printf("Масив із 10-ти випадково згенерованих чисел:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", myArray[i]);
		printf("\n");
	}

	free(myArray);


	return 0;

}