#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    
    while(!arr.empty()) {
        cout << arr.size() << endl;
        
        for(int i = 0; i < arr.size(); i++) {
            arr[i] -= arr[arr.size() - 1];
        }
        while(arr.back() == 0 && !arr.empty()) {
            arr.pop_back();
        }
    }
    
    
    return 0;
}
