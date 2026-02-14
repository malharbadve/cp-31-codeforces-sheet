#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;

    for (int t = 0; t < testcases; t++) {
        int n, k; cin >> n; cin >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            arr[i] = x;
        }

        bool failed = false;
        if (k <= 1) {
            for (int i = 1; i < n; i++) {
                if (arr[i-1] > arr[i]) {
                    printf("NO\n");
                    failed = true;
                    break;
                }
            }
            if (!failed) {
                printf("YES\n");
            }
        }
        else printf("YES\n");
    }
    return 0;
}
