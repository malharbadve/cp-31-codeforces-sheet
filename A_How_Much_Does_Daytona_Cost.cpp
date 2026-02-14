#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int n, x; cin >> n; cin >> x;
        bool success = false;

        for (int i = 0; i < n; i++) {
            int y; cin >> y;
            if (x == y && !success) {
                printf("YES\n");
                success = true;
            }
        }

        if (!success) {
            printf("NO\n");
        }
    }
    return 0;
}
