#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> l(q);
    vector<int> r(q);

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }

    vector<int> accumulation(n);
    auto current = 0;
    for (int i = 0; i < n; i++)
    {
        current += a.at(i);
        accumulation.at(i) = current;
    }

    for (int i = 0; i < q; i++)
    {

        if (l.at(i) == 1)
        {
            cout << accumulation.at(r.at(i) - 1) << endl;
        }
        else
        {
            cout << accumulation.at(r.at(i) - 1) - accumulation.at(l.at(i) - 1 - 1) << endl;
        }
    }
}