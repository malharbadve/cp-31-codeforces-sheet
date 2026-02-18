#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;

    for (int t = 0; t < testcases; t++) {
        int n; cin >> n;
        vector<int> input(n);
        vector<int> b, c;

        for (int i = 0; i < n; i++)
            cin >> input[i];

        sort(input.begin(), input.end());

        for (int i = n-1; i >= 0; i--) {
            if (input[i] == input[n-1]) c.push_back(input[i]);
            else b.push_back(input[i]);
        }

        if (!b.size()) {
            cout << "-1" << endl;
            continue;
        }

        printf("%d %d\n", b.size(), c.size());
        for (int j = 0; j < b.size(); j++) {
            cout << b[j] << " ";
        }
        cout << endl;
        for (int j = 0; j < c.size(); j++) {
            cout << c[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
