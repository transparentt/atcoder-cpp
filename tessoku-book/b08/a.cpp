#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n + 1);
    vector<int> y(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> x.at(i) >> y.at(i);
    }

    int q;
    cin >> q;

    vector<int> a(q + 1);
    vector<int> b(q + 1);
    vector<int> c(q + 1);
    vector<int> d(q + 1);

    for (int i = 1; i < q + 1; i++)
    {
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }

    vector<vector<int>> arr_xy(1500 + 1, vector<int>(1500 + 1, 0));
    for (int i = 1; i < n + 1; i++)
    {
        arr_xy.at(y.at(i)).at(x.at(i)) += 1;
    }

    vector<vector<int>> arr_acc(1500 + 1, vector<int>(1500 + 1, 0));
    for (int y = 1; y < 1500 + 1; y++)
    {
        for (int x = 1; x < 1500 + 1; x++)
        {
            arr_acc.at(y).at(x) = arr_acc.at(y).at(x - 1) + arr_xy.at(y).at(x);
        }
    }

    for (int x = 1; x < 1500 + 1; x++)
    {
        for (int y = 1; y < 1500 + 1; y++)
        {
            arr_acc.at(y).at(x) = arr_acc.at(y - 1).at(x) + arr_acc.at(y).at(x);
        }
    }

    for (int i = 1; i < q + 1; i++)
    {
        auto a_i = a.at(i);
        auto b_i = b.at(i);
        auto c_i = c.at(i);
        auto d_i = d.at(i);

        // cout << a_i << b_i << c_i << d_i << endl;

        cout << arr_acc.at(d_i).at(c_i) + arr_acc.at(b_i - 1).at(a_i - 1) - arr_acc.at(d_i).at(a_i - 1) - arr_acc.at(b_i - 1).at(c_i) << endl;
    }
}