#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int n; cin >> n;
        vector<int> permutation(n);

        for (int i = 0; i < n; i++) {
            cin >> permutation[i];
        }

        if (permutation[0] == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
