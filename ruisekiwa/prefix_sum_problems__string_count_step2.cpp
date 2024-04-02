#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    cin >> str;
    int b[str.length()];
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'b')
        {
            b[i] = 1;
        }
        else
        {
            b[i] = 0;
        }
    }

    int s[str.length() + 1];
    s[0] = 0;
    s[1] = b[0];
    for (int i = 1; i < str.length(); i++)
    {
        s[i + 1] = s[i] + b[i];
    }

    cout << s[8] - s[2] << endl;
    return 0;
}