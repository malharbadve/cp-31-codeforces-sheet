#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n = 0; cin >> n;
    int ret = INT_MAX;

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        ret = min(ret, abs(temp));
    }

    printf("%d\n", ret);
    return 0;
}
