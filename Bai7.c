#include <stdio.h>

// Hàm sắp xếp mảng theo thứ tự tăng dần
void sortAscending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm sắp xếp mảng theo thứ tự giảm dần
void sortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    printf("Nhập các phần tử của mảng: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even[evenCount++] = arr[i];
        }
        else
        {
            odd[oddCount++] = arr[i];
        }
    }

    // Sắp xếp mảng chẵn tăng dần và lẻ giảm dần
    sortAscending(even, evenCount);
    sortDescending(odd, oddCount);

    // Gộp hai mảng vào kết quả
    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
