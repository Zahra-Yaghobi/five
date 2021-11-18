#include <iostream>
using namespace std;

int main() {
    int sum, n, a;
    cout << "Enter a number : ";
    cin >> n;  
    a = n ;
    int Pascal[1000] = { 0 };
    Pascal[a] = {1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum = Pascal[a + j] + Pascal[a + j + 1];
            cout << sum <<" ";
            Pascal[a + j] = sum;
        }
        a--;
        cout << endl;
    }
    return 0;
}