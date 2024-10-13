#include <iostream>
using namespace std;

int main() {
    int n, tal, k;
    cout << "Ange antalet element i fältet: ";
    cin >> n;
    int* f = new int[n];  // Dynamically allocate array
    cout << "Ange elementen i sorterat ordning: ";
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    cout << "Vilket tal letar du efter? ";
    cin >> tal;

    for (k = 0; k < n && f[k] <= tal; k++) {
        if (f[k] == tal) {
            cout << "Talet finns på plats nr " << k << endl;
            delete[] f;  // Free allocated memory
            return 0;
        }
    }

    cout << "Talet finns ej" << endl;
    delete[] f;  // Free allocated memory
    return 0;
}
