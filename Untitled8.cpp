#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int grid[R][C];

    // Read the grid
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int r, c, l;
        cin >> r >> c >> l;
        r--; c--; // Convert to 0-based index
        int sum = 0;

        // Calculate the sum of the numbers inside the triangle
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l - i; j++) {
                sum += grid[r + i][c + j];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
