#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int n; cin >> n;
        vector<int> seq2(n);
        vector<int> seq1;

        for (int i = 0; i < n; i++) {
            cin >> seq2[i];
        }
        seq1.push_back(seq2[0]);

        for (int i = 1; i < n; i++) {
            if (seq2[i] < seq2[i-1])
                seq1.push_back(rand() % seq2[i] + 1);

            seq1.push_back(seq2[i]);
        }

        printf("%d\n", seq1.size());
        for (int i = 0; i < seq1.size(); i++) {
            printf("%d ", seq1[i]);
        }
        printf("\n");
    }
    return 0;
}
