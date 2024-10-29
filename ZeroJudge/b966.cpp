#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<array<int, 2>> l;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        
        l.push_back({a, b});
    }
    
    sort(l.begin(), l.end());
    
    int sum = 0;
    int start = l[0][0];
    int end = l[0][1];
    for(int i = 1; i < n; i++){
        if(l[i][0] <= end){
            end = max(end, l[i][1]);
        } else {
            sum += (end - start);
            start = l[i][0];
            end = l[i][1];
        }
    }
    sum += (end - start);
    
    cout << sum;
    
    return 0;
}
