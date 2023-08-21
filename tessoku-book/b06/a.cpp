#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    int q;
    cin >> q;

    vector<int> l(q);
    vector<int> r(q);
    for (int i = 0; i < q; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }

    vector<int> accumulation_hit(n);
    vector<int> accumulation_none(n);
    auto current_hit = 0;
    auto current_none = 0;
    for (int i = 0; i < n; i++)
    {
        current_hit += a.at(i);
        accumulation_hit.at(i) = current_hit;

        if (a.at(i) == 1)
        {
            current_none += 0;
            accumulation_none.at(i) = current_none;
        }
        else
        {
            current_none += 1;
            accumulation_none.at(i) = current_none;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int hit, none;
        if (l.at(i) != 1)
        {
            hit = accumulation_hit.at(r.at(i) - 1) - accumulation_hit.at(l.at(i) - 1 - 1);
            none = accumulation_none.at(r.at(i) - 1) - accumulation_none.at(l.at(i) - 1 - 1);
        }
        else
        {
            hit = accumulation_hit.at(r.at(i) - 1);
            none = accumulation_none.at(r.at(i) - 1);
        }

        if (hit > none)
        {
            cout << "win" << endl;
        }
        else if (hit == none)
        {
            cout << "draw" << endl;
        }
        else
        {
            cout << "lose" << endl;
        }
    }
}