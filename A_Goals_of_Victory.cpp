#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int n; cin >> n;

        int ret = 0;
        for (int i = 0; i < n - 1; i++) {
            int temp; cin >> temp;
            ret += temp;
        }

        printf("%d\n", -ret);
    }
    return 0;
}
