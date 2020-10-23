#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, result = 0;
    vector<int> strengths;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int strength;
        cin >> strength;
        strengths.push_back(strength);
    }

    sort(strengths.begin(), strengths.end());

    for (int i = 0; i < n; i++)
    {
        if ((strengths[i] > strengths[i - 1]) && (strengths[i] < strengths[i + 1]))
            result++;
    }

    if (n == 1)
        cout << 0 << endl;
    else
    {
        if (result > 0)
            --result;
        cout << result << endl;
    }
    return 0;
}