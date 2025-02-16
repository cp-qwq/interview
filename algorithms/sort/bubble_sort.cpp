#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> &arr) {
    if (arr.size() <= 1) {
        return;
    }

    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; i ++) {
        for (size_t j = 0; j < n - 1 - i; j ++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    
}

void Print(const std::vector<int> &arr) {
    for (const auto &x : arr) {
        std::cout << x << ' ';
    }
    std::cout << "\n";
}

int main() {
    {
        std::vector<int> arr{3, 4, 1, 2};
        std::cout << "Before sorting: ";
        Print(arr);
        bubble_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{2, 1};
        std::cout << "Before sorting: ";
        Print(arr);
        bubble_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{4, 3, 2, 1};
        std::cout << "Before sorting: ";
        Print(arr);
        bubble_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
}