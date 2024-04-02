#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> a(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    vector<int> s(11);
    s[0] = 0;
    s[1] = a[0];
    for (int i = 1; i < 10; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    cout << s[8] - s[2] << endl;
    return 0;
}