#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
    long arr[1000];
    long long int p, q, e, f, g, h, i, j = 0;
    for(i = a; i <= b; i++) {
        p = 0;
        q = i;
        while(q != 0) {
            q /= 10;
            p++;
        }
        e = pow(10,c);
        f = i * i;
        g = f / e;
        h = f % e;
        if(i == (g + h)) {
            arr[j] = i;
            j++;
        }
    }
    if(j == 0) {
        cout <<"INVALID RANGE" << endl;
    }
    else {
        for(i = 0; i < j; i++) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}