#include <iostream>
#include <array>

void input(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.at(i);
    }
}

void Insertion_Sort(std::array<int, 1000000> &arr, int &n)
{
    for (int i = 1; i < n; i++)
    {
        int element = arr.at(i);
        int previous_position = i - 1;
        while (previous_position >= 0 && arr.at(previous_position) > element)
        {
            arr.at(previous_position + 1) = arr.at(previous_position);
            previous_position--;
        }
        arr.at(previous_position + 1) = element;
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
    Insertion_Sort(arr, n);
    print(arr, n);
    return 0;
}