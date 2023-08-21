#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<int>> arr_x(h + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> arr_x.at(i).at(j);
        }
    }

    int q;
    cin >> q;

    vector<vector<int>> arr_q(q + 1, vector<int>(4, 0));
    for (int i = 1; i <= q; i++)
    {
        cin >> arr_q.at(i).at(0);
        cin >> arr_q.at(i).at(1);
        cin >> arr_q.at(i).at(2);
        cin >> arr_q.at(i).at(3);
    }

    vector<vector<int>> arr_acc(h + 1, vector<int>(w + 1, 0));

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            arr_acc.at(i).at(j) = arr_acc.at(i).at(j - 1) + arr_x.at(i).at(j);
        }
    }

    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            arr_acc.at(j).at(i) = arr_acc.at(j - 1).at(i) + arr_acc.at(j).at(i);
        }
    }

    for (int i = 1; i <= q; i++)
    {
        auto a = arr_q.at(i).at(0);
        auto b = arr_q.at(i).at(1);
        auto c = arr_q.at(i).at(2);
        auto d = arr_q.at(i).at(3);

        cout << arr_acc.at(c).at(d) + arr_acc.at(a - 1).at(b - 1) - arr_acc.at(a - 1).at(d) - arr_acc.at(c).at(b - 1) << endl;
    }
}