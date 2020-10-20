#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    vector<int> cities;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int pos;
        cin >> pos;
        cities.push_back(pos);
    }

    if (n == 2)
    {
        cout << abs(cities[0] - cities[1]) << " " << abs(cities[0] - cities[1]) << endl;
        cout << abs(cities[0] - cities[1]) << " " << abs(cities[0] - cities[1]) << endl;
    }
    else
    {
        for (int i = 0; i < cities.size(); i++)
        {
            vector<int> minN, maxN;

            if (i == 0)
            {
                cout << abs(cities[i] - cities[i + 1]) << " " << abs(cities[i] - cities[cities.size() - 1]) << endl;
            }
            else
            {
                minN.push_back(abs(cities[i] - cities[i - 1]));
                minN.push_back(abs(cities[i] - cities[i + 1]));
                maxN.push_back(abs(cities[i] - cities[cities.size() - 1]));
                maxN.push_back(abs(cities[i] - cities[0]));
                cout << min(minN[0], minN[1]) << " " << max(maxN[0], maxN[1]) << endl;
            }
        }
    }
}