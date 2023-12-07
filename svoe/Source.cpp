#include<vector>
#include <iostream>
#include<string>

using namespace std;

        void sort(int* arr, int size) {
            for (int i=0; i < size - i; i++) {
                for (int j = 0; j < size - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }
    
    void mult(int* arr, int size, int fact) {
        for (int i = 0; i < size; i++) {
            arr[i] *= fact;
        }
    }
    int main() {
        setlocale(LC_ALL, "ru");

        int arr[] = { 4,5,12,9,10 };
        cin >> arr[0];
        int size = sizeof(arr) / sizeof(arr[0]);
        int fact = 3;
        cout << " наш массив: " << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        mult(arr, size, fact);
        cout << " наш массив умноженый на 3: " << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << " отсортированый массив " << endl;
        sort(arr, size);
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        return 0;
    }



