#include <bits/stdc++.h>
using namespace std;

int main()
{
    string chars = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char LR;
    cin >> LR;
    bool right = (LR == 'R') ? true : false;
    string str ;
    cin >> str;
    for (int i = 0 ; i < str.length() ; i++)
    {
        if (right)
            cout << chars[chars.find(str[i]) - 1 ];
        else 
            cout << chars[chars.find(str[i]) + 1 ];

    }
}