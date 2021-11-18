#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "enter n: ";
    cin >> n ;
    cout << "enter m: ";
    cin >> m;

    cout << "   multiplication table is : " << m << "*" << n<<endl;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << i << "*" << j << ": " << i * j << endl;
        }
        cout << endl;
    }
}