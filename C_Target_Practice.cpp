#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int ret = 0;

        for (int i = 0; i < 5; i++) {
            string row; cin >> row;
            for (int j = 0; j < 5; j++) {
                if (row[j] == 'X') {
                    // int prev = ret;
                    if (j >= i) ret += i + 1;
                    else ret += j + 1;
                    // printf("i = %d, j = %d, score = %d\n", i, j, ret - prev);
                }
            }

            for (int j = 4; j >= 0; j--) {
                if (row[9 - j] == 'X') {
                    // int prev = ret;
                    if (j >= i) ret += i + 1;
                    else ret += j + 1;
                    // printf("i = %d, j = %d, score = %d\n", i, 9 - j, ret - prev);
                }
            }
        }

        for (int i = 4; i >= 0; i--) {
            string row; cin >> row;
            for (int j = 0; j < 5; j++) {
                if (row[j] == 'X') {
                    // int prev = ret;
                    if (j >= i) ret += i + 1;
                    else ret += j + 1;
                    // printf("i = %d, j = %d, score = %d\n", 9-i, j, ret - prev);
                }
            }

            for (int j = 4; j >= 0; j--) {
                if (row[9 - j] == 'X') {
                    // int prev = ret;
                    if (j >= i) ret += i + 1;
                    else ret += j + 1;
                    // printf("i = %d, j = %d, score = %d\n", 9-i, 9 - j, ret - prev);
                }
            }
        }

        printf("%d\n", ret);
    }
    return 0;
}
