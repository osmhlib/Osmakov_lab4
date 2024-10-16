#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    const int size = 5;
 
    if (size == 0) {
        cout << "Масив порожній!" << endl;
        return 0;
    }
 
    do {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } while (next_permutation(arr, arr + size));
 
    return 0;
}
