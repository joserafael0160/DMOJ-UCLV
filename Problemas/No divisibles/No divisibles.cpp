/***************************************************************
Source : https://dmoj.uclv.edu.cu/problem/divide
Author : José Rafael
Username : jose_rafael016
***************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, con = 0;
    cin >> n;

    while (n--) {
        if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0) con++; 
    }

    cout << con;

    return 0;
}

