#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int len = str.size();
        if(len % 2 != 0) {
            cout << -1 << endl;
        }
        else {
            int sum = 0;
            int arr[26] = {0};
            for(int i = 0; i < len/2; i++) {
                arr[str[i] - 'a']++;
            }
            for(int i = len/2; i < len; i++) {
                arr[str[i] - 'a']--;
            }
            
            for(int i = 0; i < 26; i++) {
                if(arr[i] > 0)
                    sum += arr[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}