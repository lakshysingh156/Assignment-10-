//Lakshay Singh
//1024030975
//2C71
//Assignment 10 Q4

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    for(int x: v){
        if(mp[x]==1){
            cout << x;
            return 0;
        }
    }
}
