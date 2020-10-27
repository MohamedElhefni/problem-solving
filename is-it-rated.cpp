#include <bits/stdc++.h>
using namespace std;

#define lp(i, start, n) for (int i = (int)start; i <= (int)n; i++)

int main()
{
    int n, scoreBefore, scoreAfter;
    vector<int> scores;
    cin >> n;
    lp(i, 1, n)
    {
        cin >> scoreBefore >> scoreAfter;
        if (scoreBefore != scoreAfter)
        {
            cout << "rated" << endl;
            exit(0);
        }

        scores.push_back(scoreBefore);
    }

    reverse(scores.begin(), scores.end());
    if (is_sorted(scores.begin(), scores.end()))
    {
        cout << "maybe" << endl;
        exit(0);
    }

    cout << "unrated" << endl;
}