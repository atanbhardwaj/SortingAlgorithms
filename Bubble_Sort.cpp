#include <iostream>
#include <array>

void input(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.at(i);
    }
}

void Bubble_Sort(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr.at(j) > arr.at(j + 1))
            {
                std::swap(arr.at(j), arr.at(j + 1));
            }
        }
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
    Bubble_Sort(arr, n);
    print(arr, n);
    return 0;
}