#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    // ---------- O(1) ----------
    cout << "\nO(1) Example:" << endl;
    int a = 5, b = 10;
    cout << "Sum = " << a + b << endl;

    // ---------- O(n) ----------
    cout << "\nO(n) Example:" << endl;
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // ---------- O(n^2) ----------
    cout << "\nO(n^2) Example:" << endl;
    for(int i = 1; i <= n; i++) { 
        for(int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // ---------- O(log n) ----------
    cout << "\nO(log n) Example:" << endl;
    int temp = n;
    while(temp > 1) {
        cout << temp << " ";
        temp = temp / 2;
    }

    return 0;
}