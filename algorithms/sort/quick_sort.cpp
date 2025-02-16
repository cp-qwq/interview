#include <iostream>
#include <vector>

void quick_sort(std::vector<int> &arr, int low, int high) {
    if (low >= high) return ;
    
    int t = rand() % (high - low + 1) + low; // 随机选一个作为我们的主元
    int pivot = arr[t];   // 把它作为哨兵
    std::swap(arr[low], arr[t]);

    int i = low, j = high;
    while (i < j) {
        while (i < j && arr[j] >= pivot) j --;
        while (i < j && arr[i] <= pivot) i ++;
        if (i != j) std::swap(arr[i], arr[j]);
    }

    std::swap(arr[low], arr[i]);
    quick_sort(arr, low, i - 1);
    quick_sort(arr, i + 1, high);
}

void Print(const std::vector<int> &arr) {
    for (const auto &x : arr) {
        std::cout << x << ' ';
    }
    std::cout << "\n";
}

int main() {
    {
        std::vector<int> arr{110, 100, 0};
        std::cout << "Before sorting: ";
        Print(arr);
        quick_sort(arr, 0, (int)arr.size() - 1);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{2, 1};
        std::cout << "Before sorting: ";
        Print(arr);
        quick_sort(arr, 0, (int)arr.size() - 1);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{4, 3, 2, 1};
        std::cout << "Before sorting: ";
        Print(arr);
        quick_sort(arr, 0, (int)arr.size() - 1);
        std::cout << "After sorting: ";
        Print(arr);
    }
    {
        std::vector<int> arr{1};
        std::cout << "Before sorting: ";
        Print(arr);
        quick_sort(arr, 0, (int)arr.size() - 1);
        std::cout << "After sorting: ";
        Print(arr);
    }
}