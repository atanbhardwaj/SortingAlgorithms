#include <iostream>
#include <array>

void input(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.at(i);
    }
}

void print(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr.at(i) << " ";
    }
}

void merge(std::array<int, 1000000> &arr, int mid, int low, int high)
{
    int i = low, j = mid + 1, k = 0;
    std::array<int, 1000000> brr;

    while (i <= mid && j <= high)
    {
        if (arr.at(i) < arr.at(j))
            brr.at(k++) = arr.at(i++);
        else
            brr.at(k++) = arr.at(j++);
    }

    while (i <= mid)
    {
        brr.at(k++) = arr.at(i++);
    }
    while (j <= high)
    {
        brr.at(k++) = arr.at(j++);
    }
    k = 0;
    for (i = low; i <= high; i++)
    {
        arr.at(i) = brr.at(k++);
    }
}

void Merge_Sort(std::array<int, 1000000> &arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        Merge_Sort(arr, low, mid);
        Merge_Sort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}
int main()
{
    std::array<int, 1000000> arr;
    int n;
    std::cin >> n;
    input(arr, n);
    Merge_Sort(arr, 0, n - 1);
    print(arr, n);
}