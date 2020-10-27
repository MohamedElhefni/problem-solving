#include <bits/stdc++.h>
using namespace std;

#define lp(i,start, n) for (int i = (int) start; i <= (int)n; i++)

int main() 
{
    int levels, level , xLevels, yLevels;
    set<int> passed;
    bool isGuy = true;

    cin >>levels;

    cin >> xLevels;
    lp(i, 1, xLevels)
    {
        cin >> level;
        passed.insert(level);
    }
    cin >> yLevels;
    lp(i , 1, yLevels)
    {
        cin >> level;
        passed.insert(level);
    }

    lp(j , 1, levels)
    {
        if (passed.count(j) == 0)
            isGuy = false;
    }

    if (isGuy)
        cout << "I become the guy." << endl;
    else 
        cout << "Oh, my keyboard!" << endl;

}