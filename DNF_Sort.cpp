#include <iostream>
#include <array>

void input(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.at(i);
    }
}

void DNF_Sort(std::array<int, 1000000> &arr, int &n)
{
    int low = 0, high = n - 1, mid = 0;
    while (mid <= high)
    {
        if (arr.at(mid) == 0)
        {
            std::swap(arr.at(low), arr.at(mid));
            low++;
            mid++;
        }
        else if (arr.at(mid) == 2)
        {
            std::swap(arr.at(high), arr.at(mid));
            high--;
        }
        else
            mid++;
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
    int n;
    std::cin >> n;
    std::array<int, 1000000> arr;
    input(arr, n);
    DNF_Sort(arr, n);
    print(arr, n);
}