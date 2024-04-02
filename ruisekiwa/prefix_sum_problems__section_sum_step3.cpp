#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
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

    cout << s[Y + 1] - s[X] << endl;
    return 0;
}