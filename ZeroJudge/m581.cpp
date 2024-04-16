#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int player[n];
    bool live[n];
    for (int i = 0; i < n; i++){
        cin >> player[i];
        live[i] = true;
    }

    bool have_wrong = false;
    while(1){
        int data;
        cin >> data;

        if(data == 0){
            break;
        }
        live[data - 1] ? live[data - 1] = false : have_wrong = true;
    }

    if(have_wrong){
        cout << "Wrong";
    } else {
        for(int i = 0; i < n; i++){
            if(live[i] == true && player[i] == -1){
                cout << "Werewolves";
                return 0;
            }
        }
        cout << "Townsfolk";
    }
    return 0;
}
