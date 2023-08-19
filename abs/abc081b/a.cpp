#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }

    int result = 0;
    while (true)
    {
        bool exist_odd = false;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec.at(i) % 2 != 0)
            {
                exist_odd = true;
            }
        }

        if (exist_odd)
        {
            break;
        }

        for (int i = 0; i < vec.size(); i++)
        {
            vec.at(i) /= 2;
        }

        result += 1;
    }
    cout << result << endl;
}