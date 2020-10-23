#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, alpha[26] = {0};
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
        alpha[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            cout << "NO";
            exit(0);
        }
    }

    cout << "YES";
}