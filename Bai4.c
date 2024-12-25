#include <stdio.h>

// Hàm sắp xếp mảng theo thứ tự tăng dần bằng thuật toán Sắp xếp chèn
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Dời các phần tử lớn hơn key sang phải
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // In mảng ban đầu
    printf("Mảng ban đầu: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sắp xếp mảng
    insertionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
