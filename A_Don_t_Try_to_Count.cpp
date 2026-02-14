#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int x, y; cin >> x; cin >> y;
        string a, b; cin >> a; cin >> b;

        int count = 0;
        while (x < y) {
            a += a;
            x *= 2;
            count++;
        }

        a += a;

        int index = a.find(b);

        if (index == -1)
            printf("-1\n");
        else {
            if ((index + y) > x) count++;
            printf("%d\n", count);
        }

    }
    return 0;
}
