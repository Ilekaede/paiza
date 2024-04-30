#include <iostream>
#include <vector>

using namespace std;
int main(){
    int A, B; cin >> A >> B;
    int N; cin >> N;
    vector<int> h(N);
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }
    bool flag = true;
    int cnt = 0;
    if(A <= B){
        cout << (*max_element(begin(h), end(h)) / B) + 1 << endl;
    }
    else{
        for(int i = 0; i < N; i++){
            if(h[i] > B){
                while(h[i] > B){
                    h[i] -= A;
                    cnt++;
                }
            }
        }
        cout << cnt + 1 << endl;
    }

    return 0;
}