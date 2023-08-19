#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int result = 0;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (i % 2 == 0)
        {
            result += vec.at(i);
        }
        else
        {
            result -= vec.at(i);
        }
    }

    cout << result << endl;
}