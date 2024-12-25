#include <stdio.h>

// Hàm sắp xếp mảng theo thứ tự tăng dần bằng Selection Sort
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Hoán đổi phần tử nhỏ nhất với phần tử tại vị trí i
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Hàm tìm kiếm nhị phân
int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid; // Trả về chỉ số nếu tìm thấy
        }
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1; // Không tìm thấy
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

    int target;
    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &target);

    // Sắp xếp mảng
    selectionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("Mảng sau khi sắp xếp:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Tìm kiếm phần tử trong mảng đã sắp xếp
    int result = binarySearch(arr, n, target);
    if (result != -1)
    {
        printf("Phần tử %d được tìm thấy tại vị trí %d\n", target, result);
    }
    else
    {
        printf("Không tìm thấy phần tử %d\n", target);
    }

    return 0;
}
