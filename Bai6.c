#include <stdio.h>

// Hàm sắp xếp mảng theo thứ tự tăng dần bằng thuật toán Sắp xếp chọn
void selectionSort(int arr[], int n)
{
    int swapCount = 0; // Biến đếm số lần hoán đổi

    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        // Tìm chỉ số của phần tử nhỏ nhất trong phần chưa được sắp xếp
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }

        // Hoán đổi nếu cần
        if (minIdx != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
            swapCount++;

            // In trạng thái mảng sau mỗi lần hoán đổi
            printf("Hoán đổi: ");
            for (int k = 0; k < n; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    // In số lần hoán đổi
    printf("Sắp xếp hoàn thành với %d lần hoán đổi.\n", swapCount);
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
    selectionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("Mảng đã sắp xếp: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
