#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<int>> arr_x(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr_x.at(i).at(j);
        }
    }

    int q;
    cin >> q;

    vector<vector<int>> arr_q(q, vector<int>(4, 0));
    for (int i = 0; i < q; i++)
    {
        cin >> arr_q.at(i).at(0);
        cin >> arr_q.at(i).at(1);
        cin >> arr_q.at(i).at(2);
        cin >> arr_q.at(i).at(3);
    }

    vector<vector<int>> arr_acc(h, vector<int>(w, 0));

    for (int i = 0; i < h; i++)
    {
        auto current = 0;
        for (int j = 0; j < w; j++)
        {
            current += arr_x.at(i).at(j);
            arr_acc.at(i).at(j) = current;
        }
    }

    for (int i = 0; i < w; i++)
    {
        auto current = 0;
        for (int j = 0; j < h; j++)
        {
            current += arr_acc.at(j).at(i);
            arr_acc.at(j).at(i) = current;
        }
    }

    for (int i = 0; i < q; i++)
    {
        auto a = arr_q.at(i).at(0);
        auto b = arr_q.at(i).at(1);
        auto c = arr_q.at(i).at(2);
        auto d = arr_q.at(i).at(3);

        if (a - 1 == 0 && b - 1 == 0)
        {

            cout << arr_acc.at(c - 1).at(d - 1) << endl;
        }
        else if (a - 1 == 0)
        {
            cout << arr_acc.at(c - 1).at(d - 1) - arr_acc.at(c - 1).at(b - 1 - 1) << endl;
        }
        else if (b - 1 == 0)
        {
            cout << arr_acc.at(c - 1).at(d - 1) - arr_acc.at(a - 1 - 1).at(d - 1) << endl;
        }
        else
        {
            cout << arr_acc.at(c - 1).at(d - 1) + arr_acc.at(a - 1 - 1).at(b - 1 - 1) - arr_acc.at(a - 1 - 1).at(d - 1) - arr_acc.at(c - 1).at(b - 1 - 1) << endl;
        }
    }
}