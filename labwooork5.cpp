#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m;
	int array[3][3];
	printf("Input values of array:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &array[i][j]);
		}
	}
	printf("Original array:\n");
	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("%d", array[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int z = 0; z < 2; z++) {
			for (int j = 1; j < 3; j++) {
				if (array[i][z] < array[i][j]) {
					m = array[i][z];
					array[i][z] = array[i][j];
					array[i][j] = m;
				}
			}
		}
	}
	printf("\n");
	printf("Sorted array:\n");
	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("%d", array[i][j]);
		}
	}
	return 0;
}