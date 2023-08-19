#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string dream = "dream";
    string dreamer = "dreamer";
    string erasee = "erase";
    string eraseer = "eraser";

    bool can = true;
    while (true)
    {
        if (s.size() >= dream.size() &&
            s.find(dream, s.size() - dream.size()) != string::npos)
        {
            s = s.substr(0, s.size() - dream.size());
        }
        else if (s.size() >= dreamer.size() &&
                 s.find(dreamer, s.size() - dreamer.size()) != string::npos)
        {
            s = s.substr(0, s.size() - dreamer.size());
        }
        else if (s.size() >= erasee.size() &&
                 s.find(erasee, s.size() - erasee.size()) != string::npos)
        {
            s = s.substr(0, s.size() - erasee.size());
        }
        else if (s.size() >= eraseer.size() &&
                 s.find(eraseer, s.size() - eraseer.size()) != string::npos)
        {
            s = s.substr(0, s.size() - eraseer.size());
        }
        else
        {
            can = false;
            break;
        }

        if (s.size() == 0)
        {
            break;
        }
    }

    if (can)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}