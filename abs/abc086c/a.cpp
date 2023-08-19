#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(100001);
    vector<int> x(100001);
    vector<int> y(100001);

    t.at(0) = 0;
    x.at(0) = 0;
    y.at(0) = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t.at(i + 1) >> x.at(i + 1) >> y.at(i + 1);
    }

    bool can = true;
    for (int i = 0; i < n; i++)
    {
        int distance = abs(x.at(i + 1) - x.at(i)) + abs(y.at(i + 1) - y.at(i));
        int dt = t.at(i + 1) - t.at(i);

        if (dt < distance)
        {
            can = false;
            break;
        }

        if (dt % 2 != distance % 2)
        {
            can = false;
        }
    }

    if (can)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}