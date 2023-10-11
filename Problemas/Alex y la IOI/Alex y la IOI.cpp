
/***************************************************************
Source : https://dmoj.uclv.edu.cu/problem/alexandioi
Author : José Rafael
Username : jose_rafael016
***************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, a, b;
    string v;

    cin >> n >> a >> b >> v;
    cout << (v[a-1] != v[b-1]);

    return 0;
}