#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    int n;
    cin >> n;

    vector<int> dh(d + 1);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        dh.at(l - 1) += 1;
        dh.at(r - 1 + 1) -= 1;
    }

    vector<int> accumulation(d);
    auto current = 0;
    for (int i = 0; i < d; i++)
    {
        current += dh.at(i);
        accumulation.at(i) = current;
    }

    for (int i = 0; i < d; i++)
    {
        cout << accumulation.at(i) << endl;
    }
}