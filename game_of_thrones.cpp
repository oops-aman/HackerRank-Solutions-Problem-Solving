#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    sort(s.begin(), s.end());
    int count1 = 1, count2 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s[i+1]) {
            count1++;
        } else {
            if(count1 % 2 != 0) {
                count2++;
            }
            count1 = 1;
        }
    }
    if(count2 > 1)
        return "NO";
        
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
