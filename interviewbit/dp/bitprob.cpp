#include <bits/stdc++.h>

using namespace std;

int bitno11(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    cout << bitno11(3);
    return 0;
}