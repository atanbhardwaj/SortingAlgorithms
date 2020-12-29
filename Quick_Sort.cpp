#include <iostream>
#include <array>

void input(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.at(i);
    }
}

int partition(std::array<int, 1000000> &arr, int low, int high)
{

    int pivot = arr.at(low);
    int j = high - 1;
    int i = low;
    while (i < j)
    {
        while (i < high && arr.at(i) <= pivot)
        {
            i++;
        }
        while (j >= 0 && arr.at(j) > pivot)
        {
            j--;
        }
        if (i < j)
        {
            std::swap(arr.at(i), arr.at(j));
            j--;
        }
    }
    std::swap(arr.at(j), arr.at(low));
    return j;
}

void Quick_Sort(std::array<int, 1000000> &arr, int low, int &high)
{
    if (low < high)
    {
        int pos = partition(arr, low, high);
        Quick_Sort(arr, low, pos);
        Quick_Sort(arr, pos + 1, high);
    }
}

void print(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr.at(i) << " ";
    }
}

int main()
{

    std::array<int, 1000000> arr;
    int n;
    std::cin >> n;
    input(arr, n);
    Quick_Sort(arr, 0, n);
    print(arr, n);
    return 0;
}