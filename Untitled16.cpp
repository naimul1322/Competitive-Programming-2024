#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A[3], B[3];
        cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];

        // Sort the dice rolls to form the largest possible number
        sort(A, A + 3);
        sort(B, B + 3);

        // Compare the sorted arrays from the highest to lowest
        if (A[2] > B[2] || (A[2] == B[2] && A[1] > B[1]) || (A[2] == B[2] && A[1] == B[1] && A[0] > B[0])) {
            cout << "Alice" << endl;
        } else if (B[2] > A[2] || (B[2] == A[2] && B[1] > A[1]) || (B[2] == A[2] && B[1] == A[1] && B[0] > A[0])) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
