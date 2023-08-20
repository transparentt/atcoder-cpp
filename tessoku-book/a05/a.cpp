#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    auto result = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            auto w = k - i - j;
            if (i + j + w == k && w >= 1 && w <= n)
            {
                result += 1;
            }
        }
    }

    cout << result << endl;
}