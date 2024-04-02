#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    vector<int> s(N + 1);
    s[0] = 0;
    s[1] = a[0];
    for (int i = 1; i < N; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    cout << s[Y + 1] - s[X] << endl;
    return 0;
}