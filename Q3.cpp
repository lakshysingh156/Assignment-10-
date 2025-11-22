//Lakshay Singh
//1024030975
//2C71
//Assignment 10 Q3

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n; cin >> n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto &p: mp) cout << p.first << " " << p.second << endl;
}
