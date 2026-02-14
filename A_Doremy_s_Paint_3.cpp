#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int n; cin >> n;
        vector<int> array(n);
        map<int, int> seen;

        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> array[i];
            seen[array[i]]++;
        }

        int first = seen.begin()->second; bool failed = false;
        for (auto &pair: seen) {
            // printf("%d, %d\n", pair.first, pair.second);
            if (abs(pair.second - first) > 1) {
                failed = true;
                break;
            }
        }

        if (seen.size() >= 3 || failed)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
