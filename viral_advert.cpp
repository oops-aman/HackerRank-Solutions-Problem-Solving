#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int shared = 3;
    int likeCount = 0;
    int reciepent = 5;
    for(int i = 0; i < n; i++) {
        reciepent /= 2;
        likeCount += reciepent;
        reciepent *= shared;
    }
    cout << likeCount << endl;
    return 0;
}
