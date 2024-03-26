#include <iostream>
#include <set>

using namespace std;
int main()
{
    int N, B;
    cin >> N >> B;
    set<int> st;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }

    if (st.find(B) != st.end())
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}