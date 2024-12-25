#include <stdio.h>

// Hàm sắp xếp mảng theo thứ tự tăng dần bằng thuật toán Sắp xếp nổi bọt cải tiến
void bubbleSortImproved(int arr[], int n)
{
    int iteration = 0; // Đếm số lần lặp
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0; // Kiểm tra nếu có hoán đổi xảy ra
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Hoán đổi nếu phần tử hiện tại lớn hơn phần tử kế tiếp
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        iteration++;
        // Nếu không có hoán đổi nào xảy ra, kết thúc sớm
        if (!swapped)
        {
            break;
        }
    }

    printf("Sắp xếp hoàn thành sau %d lần lặp.\n", iteration);
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
    bubbleSortImproved(arr, n);

    // In mảng sau khi sắp xếp
    printf("Mảng đã sắp xếp: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
