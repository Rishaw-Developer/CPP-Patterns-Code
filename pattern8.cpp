#include <iostream>
using namespace std;

/*
Here n = 5
1 2 3 4 5 
1 2 3 4   
1 2 3     
1 2       
1 
*/

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n+1-i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}