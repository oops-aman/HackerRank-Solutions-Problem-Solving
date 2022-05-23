#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
    int arr1[26] = {0}, arr2[26] = {0};
    for(int i = 0; i < s1.size(); i++) {
        int temp = s1[i] - 97;
        arr1[temp]++;
    }
    for(int i = 0; i < s2.size(); i++) {
        int temp = s2[i] - 97;
        arr2[temp]++;
    }
    int count=0;

    for(int i=0; i<26; i++)
    {
        int x = abs(arr1[i]-arr2[i]);
        count+=x;
    }

return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
