#include <bits/stdc++.h>
using namespace std;

int maxdiff(string s)
{

    int curmax = 0;
    int max_sofar = -1;

    for (int i = 0; i < s.length(); i++) {
        //similar approach to kadanes algo
        if (s[i] == '0')
            curmax++;
        else
            curmax--;
        if (curmax < 0)
            curmax = 0;
        if (curmax > max_sofar)
            max_sofar = curmax;
    }
    return max_sofar == 0 ? -1 : max_sofar;
}

int main()
{

    string s;
    cout << "Enter string:\n";
    cin >> s;

    cout << "Max difference between 0 and 1 in any substring: " << maxdiff(s) << endl;

    return 0;
}
