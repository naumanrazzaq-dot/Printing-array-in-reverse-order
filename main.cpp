#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int arr2[10];


    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }


    for(int i = 0; i < 10; i++) {
        arr2[i] = arr[9 - i];
        cout << arr2[i] << " ";
    }

    return 0;
}
