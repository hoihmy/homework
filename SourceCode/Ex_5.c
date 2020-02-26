#include <stdio.h>

void increaseBubbleSort(int a[], int size) {
    int i, j, temp;
    // sắp xếp mảng sử dụng phương pháp Bubble sort 
    // duyệt i từ 0 đến n - 2
    // sau mỗi lần duyệt j = n - 1 đến j >= 1
    // thì sẽ tìm được phần tử nhỏ nhất
    // sau đó tăng i lên 1 và quay lại duyệt j
    // khi i > n - 1 thì ngừng vòng lặp
    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j >= 1; j--) {
            // nếu phần tử đứng sau nhỏ hơn phần tử đứng trước thì đổi chỗ 2 phần tử đó cho nhau
            // với cách sắp xếp này thì trong lần duyệt đầu tiên, phần tử nhỏ nhất sẽ được chuyển lên trên cùng.
            if (a[j] < a[j - 1]) {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}

void decreaseSelectionSort(int a[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (a[i] < a[j]) {
                // Hoan vi 2 so a[i] va a[j]
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d", a[i]);
    }
}
 
void main() {
    
    int i;
    int a[] = {4, 5, 6, 2, 3, 4, 1};
    // Lay kich thuoc cua mang:
    int size = sizeof(a)/sizeof(a[0]);
    
    printf("Gia tri mang ban dau: ");
    for (i = 0; i < 7; i++) {
        printf("%2d", a[i]);
    }

    // Ham sap xep dung thuat toan bubble sort:
    increaseBubbleSort(a, size);
    
    printf("\n\nBubble sort, mang da sap xep theo tang dan la: ");
    printArray(a, size);
    
    // Ham sap xep dung thuat toan selelction sort:
    decreaseSelectionSort(a, size);
    
    printf("\n\nSelelction sort, mang da sap xep theo giam dan la: ");
    printArray(a, size);
}
 