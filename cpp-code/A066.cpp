#include <iostream>
#include <vector>
#include <set>

using namespace std;
int main(){
    int N;
    cin >> N;
    set<int> st;
    for(int i = 0; i < N; i++){
        int A, B; cin >> A >> B;
        for(int j = A; j <= B; j++){
            st.insert(j);
        }
    }
    
    int longest = -1;
    int length;
    int current_num = 0;
    for(int num : st){
        if(!st.count(num - 1)) {
            length = 1;
            current_num = num;
        }

        while(st.count(current_num + 1)){
            current_num += 1;
            length += 1;
        }

        longest = max(length, longest);

    }

    cout << longest << endl;

    return 0;
}