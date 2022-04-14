#include <bits/stdc++.h>
using namespace std; 
 
int main() {
    int t;
    cin >> t; 
    while(t--) {
        string str;
        cin >> str;
        if(next_permutation(str.begin(), str.end())) {
            printf("%s\n",str.c_str());
        }
        else {
            printf("no answer\n");
        }
    }
    
    return 0;
}