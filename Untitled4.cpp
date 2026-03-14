#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& points) {
    int n = points.size();
    for (int i = 1; i < n; ++i) {
        if (points[i] - points[i - 1] <= 2) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i];
        }
        sort(points.begin(), points.end());
        if (isPossible(points)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
