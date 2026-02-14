#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases = 0; cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        int n, x; cin >> n; cin >> x;
        vector<int> stops(n);

        for (int j = 0; j < n; j++) {
            cin >> stops[j];
        }

        int ret = stops[0];
        for (int j = 1; j < n; j++) {
            ret = max(stops[j] - stops[j - 1], ret);
        }
        ret = max(ret, (x - stops[n - 1]) * 2);

        printf("%d\n", ret);
    }
    return 0;
}
