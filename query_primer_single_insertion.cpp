#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;
    int A;
    for (int i = 0; i < N; i++)
    {
        cin >> A;
        if (i == K)
        {
            cout << Q << endl;
        }

        cout << A << endl;
    }

    return 0;
}