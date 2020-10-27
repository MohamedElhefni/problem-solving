#include <bits/stdc++.h>
using namespace std;

#define lp(i, n) for (int i = 1; i <= (int)n; i++)

long long int getOddNum(long long int pos)
{
    return (2 * (pos - 1) + 1);
}

long long int getEvenNum(long long int pos)
{
    return (2 * pos);
}

int main()
{
    long long int n;
    long long int k;
    cin >> n >> k;
    
        long long int half =n % 2 == 0 ? n/2 : (n + 1) / 2;
        if (k <= half) // odd numbers
        {
            cout << getOddNum(k) << endl;
        }else 
        {
            long long int pos = (k - half); // even number pos 
            cout << getEvenNum(pos) << endl;
        }
    
}