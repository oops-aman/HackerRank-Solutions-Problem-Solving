#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    stack<int> st;
    stack<int> max;
    max.push(0);
    ll n;
    cin >> n;
    int num;
    int ch;
    for(int i = 0; i < n; i++) {
        cin >> ch;
        switch(ch) {
            case 1: cin >> num;
                    if(num >= max.top()) max.push(num);
                    st.push(num);
                    break;
                    
            case 2: if(st.top() == max.top()) max.pop();
                    st.pop();
                    break;
                    
            case 3: cout << max.top() << endl;
                    break;
        }
    }
    return 0;
}