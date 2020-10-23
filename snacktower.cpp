#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<bool> inStock(n + 1);
    int height = n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        inStock[x] = true;
        while (inStock[height])
        {
            cout << height-- << " ";
        }
        cout << endl;
    }
    return 0;
}