#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int c = 0;
        map<pair<char, char>, int> m;
        for (int i = 1; i < n; i++)
        {
            m.insert({{str[i - 1], str[i]}, i});
        }
        // for (auto it = m.begin(); it != m.end(); ++it)
        // {
        //     cout << it->first.first << it->first.second << ' ' << it->second << endl;
        // }
        cout << m.size() << endl;
    }
}
