#include <iostream>
using namespace std;

/*
Here n = 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

int main() {
    int n;
    cin >> n;
    int count;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            ++count;
            cout << count << " ";
        }
        count = 0;
        cout << endl;
    }

    return 0;
}