#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    bool contain = false;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a == x)
        {
            contain = true;
            break;
        }
    }

    if (contain)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}