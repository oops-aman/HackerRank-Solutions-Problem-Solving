#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5+10;
int N,A[maxN];

int main()
{
    cin >> N;
    for (int i=1; i <= N; i++) cin >> A[i];
    sort(A+1,A+N+1);
    int ans = abs(A[2]-A[1]);
    for (int i=2; i <= N; i++) ans = min(ans,abs(A[i]-A[i-1]));
    cout << ans;
}