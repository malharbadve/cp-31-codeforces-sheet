#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        int n; cin >> n;

        string input; cin >> input;

        int j = 0, ret = 0;
        while (j < n) {
            while (input[j] == '#' && j < n) j++;

            if (j < n && input[j] == '.') {
                ret++; j++; int count = 1;
                if (j < n && input[j] == '.') {
                    ret++; j++;
                    count++;
                    if (input[j] == '.') {
                        ret = 2;
                        break;
                    }
                }
            }
        }
        printf("%d\n", ret);
    }

    return 0;
}
