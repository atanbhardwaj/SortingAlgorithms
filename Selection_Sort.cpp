#include <iostream>
#include <array>

void input(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.at(i);
    }
}

void Selection_Sort(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = arr.at(i);
        int position = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr.at(j) < minimum)
            {
                minimum = arr.at(j);
                position = j;
            }
        }

        std::swap(arr.at(i), arr.at(position));
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
    Selection_Sort(arr, n);
    print(arr, n);
    return 0;
}