/***************************************************************
Source : https://dmoj.uclv.edu.cu/problem/cad 
Author : José Rafael
Username : jose_rafael016
***************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    char let;
    int con = 0, may = 0;

    while (cin >> let) {
        if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u') {
            con++;
            if (con > may) may = con;
        }
        else con = 0;
    }

    cout << may;



    return 0;
}
