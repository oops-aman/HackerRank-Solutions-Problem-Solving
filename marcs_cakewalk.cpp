#include <bits/stdc++.h>
using namespace std;

void milesMarc(int calorie[], int n) {
    sort(calorie, calorie+n);
    long int miles = 0;
    int j = 0;
    for(int i = (n-1); i >= 0; i--) {
        miles = miles + ((long)calorie[i] * pow(2, j));
        j++;
    }
    cout << miles << endl;
}

int main() {
    int n;
    cin >> n;
    int calorie[n];
    for(int i = 0; i < n; i++) {
        cin >> calorie[i];
    }
    milesMarc(calorie, n);
    return 0;
}