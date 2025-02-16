#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &arr) {
    if (arr.size() <= 1) {
        return;
    }

    size_t n = arr.size();
    for (size_t i = 1; i < n; i ++) {
        int key = arr[i];
        int j = i - 1;

        // 把比key大的都往后移
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = key;
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
        insertion_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{2, 1};
        std::cout << "Before sorting: ";
        Print(arr);
        insertion_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{4, 3, 2, 1};
        std::cout << "Before sorting: ";
        Print(arr);
        insertion_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{1};
        std::cout << "Before sorting: ";
        Print(arr);
        insertion_sort(arr);
        std::cout << "After sorting: ";
        Print(arr);
    }
}