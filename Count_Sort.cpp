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

void Count_Sort(std::array<int, 1000000> &arr, int &n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr.at(i) > max)
        {
            max = arr.at(i);
        }
    }
    std::array<int, 1000000> count;
    for (int i = 0; i < n; i++)
    {
        count.at(arr.at(i))++;
    }
    int k = 0;
    for (int i = 0; i <= max; i++)
    {
        if (count.at(i) > 0)
        {
            while (count.at(i)--)
            {
                arr.at(k++) = i;
            }
        }
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::array<int, 1000000> arr;
    input(arr, n);
    Count_Sort(arr, n);
    print(arr, n);
}