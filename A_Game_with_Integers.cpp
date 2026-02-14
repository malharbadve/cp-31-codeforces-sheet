#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int testcases; cin >> testcases;
    for (int t = 0; t < testcases; t++) {
        int input; cin >> input;

        if (input % 3) printf("First\n");
        else printf("Second\n");
    }
    return 0;
}
