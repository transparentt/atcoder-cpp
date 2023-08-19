#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;

    vector<int> result(3);
    bool truth = false;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            int k = n - i - j;
            if ((10000 * i + 5000 * j + 1000 * k) == y)
            {
                truth = true;
                result.at(0) = i;
                result.at(1) = j;
                result.at(2) = k;
            }
        }
    }
    if (truth)
    {
        cout << result.at(0) << " " << result.at(1) << " " << result.at(2) << endl;
    }
    else
    {
        cout << "-1 -1 -1" << endl;
    }
}