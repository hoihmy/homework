#include <stdio.h>
#include <stdlib.h>

void inMangTuDauToiCuoi(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d", a[i]);
    }
}

void inMangTuCuoiToiDau(int a[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%2d", a[i]);
    }
}

void inSoChan(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i]%2 == 0) {
            printf("%2d", a[i]);
        }
    }
}

void inSoLe(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i]%2 != 0) {
            printf("%2d", a[i]);
        }
    }
}

void randomMang(int a[], int size) {
    int minPosition;
	int maxPosition = size - 1;
	int swapPosition;
	int i = 0;
	while (i < size - 1) {
		minPosition = i + 1;
		swapPosition = rand() % (maxPosition - minPosition + 1) + minPosition;
		
		int temp = a[i];
	    a[i] = a[swapPosition];
	    a[swapPosition] = temp;
		i++;
	}

	for (int i = 0; i < size; i++) {
		printf("%2d ", a[i]);
	}
}

void main() {
    int i;
    int a[] = {4, 5, 6, 2, 3, 4, 1};
    // Lay kich thuoc cua mang:
    int size = sizeof(a)/sizeof(a[0]);
    
    printf("Gia tri mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%2d", a[i]);
    }

    printf("\n\nMang in tu dau -> cuoi la: ");
    inMangTuDauToiCuoi(a, size);
    
    printf("\n\nMang in tu cuoi -> dau la: ");
    inMangTuCuoiToiDau(a, size);
    
    printf("\n\nMang in so chan: ");
    inSoChan(a, size);
    
    printf("\n\nMang in so le: ");
    inSoLe(a, size);
    
    printf("\n\nMang in random: ");
    randomMang(a, size);
}
