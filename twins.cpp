#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , sum =0, arr[100], a_sum=0,b_sum=0, result=0; 
    cin >> n;
    for (int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    for (int i = n - 1; i >=0 ; i--)
    {
        a_sum += arr[i];
        result++;
        b_sum = sum - a_sum;

        if (a_sum > b_sum){
            cout << result << endl;
            exit(0);
        }
    }

}