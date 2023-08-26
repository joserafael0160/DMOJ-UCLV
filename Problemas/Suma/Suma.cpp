/***************************************************************
Source : https://dmoj.uclv.edu.cu/problem/sum
Author : José Rafael
Username : jose_rafael016
***************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, sum = 0;
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }
     else {
        for (int i = n; i < -1; i++) {
            sum += i;
        }
    }

    cout << sum;



    return 0;
}
