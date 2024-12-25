#include <stdio.h>

// Hàm để hiển thị mảng
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm Selection Sort
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i; // Chỉ số của phần tử nhỏ nhất

        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        // Hoán đổi phần tử nhỏ nhất với phần tử đầu tiên của mảng chưa sắp xếp
        if (minIdx != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main()
{
    int n;

    // Nhập số phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
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
    selectionSort(arr, n);

    // Hiển thị mảng sau khi sắp xếp
    printf("after: ");
    printArray(arr, n);

    return 0;
}
