#include <iostream>
using namespace std;

// Khai báo hàm
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void bubbleSort(int a[], int n);
void quickSort(int a[], int low, int high);
void heapSort(int a[], int n);
void printArray(int a[], int n);

int main() {
    int original[] = { 3, -12, 14, 9, 11, -50, -100 };
    int n = sizeof(original) / sizeof(original[0]);

    int choice;

    do {
        // copy l?i m?ng ban ??u m?i l?n ch?y
        int a[100];
        for (int i = 0; i < n; i++)
            a[i] = original[i];

        cout << "\n===== MENU =====\n";
        cout << "1. Selection Sort\n";
        cout << "2. Insertion Sort\n";
        cout << "3. Bubble Sort\n";
        cout << "4. Quick Sort\n";
        cout << "5. Heap Sort\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        if (choice == 0) break;

        cout << "\nMang ban dau: ";
        printArray(a, n);

        switch (choice) {
        case 1: selectionSort(a, n); break;
        case 2: insertionSort(a, n); break;
        case 3: bubbleSort(a, n); break;
        case 4: quickSort(a, 0, n - 1); break;
        case 5: heapSort(a, n); break;
        default:
            cout << "Lua chon khong hop le!\n";
            continue;
        }

        cout << "Mang sau khi sap xep: ";
        printArray(a, n);

    } while (true);

    cout << "Da thoat chuong trinh!\n";
    return 0;
}