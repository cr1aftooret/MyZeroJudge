#include <bits/stdc++.h>
using namespace std;

int eval(){
    int x, y, z;
    char token[7];
    cin >> token;
    if(token[0] == 'f'){
        x = eval();
        return 2 * x - 3;
    } else if(token[0] == 'g'){
        x = eval();
        y = eval();
        return 2 * x + y - 7;
    } else if(token[0] == 'h'){
        x = eval();
        y = eval();
        z = eval();
        return 3 * x - 2 * y + z;
    } else {
        return atoi(token);
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cout << eval();
    
    return 0;
}

