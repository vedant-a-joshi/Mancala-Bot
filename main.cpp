#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#define int long long
#define double long double
#pragma GCC optimize("O3,unroll-loops,inline")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,avx,avx2,popcnt")
using namespace std;

#define fastio cin.tie(0);cin.sync_with_stdio(0);
#define endl "\n"

string toBaseSix(int a);
void simulate(vector<int> &a, vector<int> &b, int pickup, int &aBox, int &bBox);

signed main() {
    fastio

    int depth;
    cout << "enter depth: ";
    cin >> depth;
    vector<int> a = {4, 4, 4, 4, 4, 4};
    vector<int> b = {4, 4, 4, 4, 4, 4};
    int pick;

    int currentDifference = -1000;
    
    for (int i = 0; i < pow(6, depth); i++) {
        string r = toBaseSix(i);
        while (r.size() < depth) {
            r = "0" + r;
        }
        int aBox = 0;
        int bBox = 0;
        for (int j = depth - 1; j >= 0; j--) {
            simulate(a, b, r[j], aBox, bBox);
        }
        if (aBox - bBox > currentDifference) {
            pick = r[depth - 1];
        }
    }

    cout << "pick box " << pick + 1 << " from the bottom" << endl;
}

string toBaseSix(int a) {
    string number = "";
    while (a > 0) {
        number = to_string(a%6) + number;
        a /= 6;
    }

    return number;
}

void simulate(vector<int> &a, vector<int> &b, int pickup, int &aBox, int &bBox) {
    int i;
    int marbles = a[pickup];
    if (pickup < a[i]) {
        for (int i = pickup - 1; i >= 0; i--) {
            a[i] += 1;
        }
    } else if (pickup + 1 == a[i]) {
        
    }
}