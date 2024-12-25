#include <stdio.h>
#include <stdbool.h>

// Hàm để hiển thị mảng
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm Bubble Sort với tối ưu
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false; // Biến kiểm tra xem có hoán đổi không

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { // Sắp xếp tăng dần
                // Hoán đổi hai phần tử
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // Nếu không có hoán đổi nào xảy ra, thoát vòng lặp
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int n;

    // Nhập số phần tử của mảng
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Hiển thị mảng trước khi sắp xếp
    printf("before: ");
    printArray(arr, n);

    // Sắp xếp mảng
    bubbleSort(arr, n);

    // Hiển thị mảng sau khi sắp xếp
    printf("after: ");
    printArray(arr, n);

    return 0;
}
