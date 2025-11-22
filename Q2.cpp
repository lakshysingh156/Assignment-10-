//Lakshay Singh
//1024030975
//2C71
//Assignment 10 Q2

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    unordered_set<int> a;
    for(int i=0;i<n;i++){
        int x; cin >> x; a.insert(x);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int x; cin >> x;
        if(a.count(x)) cout << x << " ";
    }
}
