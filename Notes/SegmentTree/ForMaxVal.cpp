#include <bits/stdc++.h>
using namespace std;

int a[100005];
int seg[4*100005];

void build(int idx, int l, int r) {
    if(l == r) {
        seg[idx] = a[l];
        return;
    }

    int mid = (l +r)/2;
    build(2*idx+1, l, mid);
    build(2*idx+2, mid+1, r);

    seg[idx] = max(seg[2*idx+1], seg[2*idx+2]);
}

int query(int idx, int low, int high, int l, int r) {
    if(l<=low && high<=r) {
        return seg[idx];
    }

    if(low>r) return INT_MIN;
    if(high<l) return INT_MIN;

    int mid = (l+r)/2;

    // int left = query(2*idx+1, low, mid, l, r);
    int right = query(2*idx+2, mid+1, high, l, r);

    return right;
}

int main() {
    int n = 6;
    a[0] = 1; 
    a[1] = 3;
    a[2] = 5;
    a[3] = 7;
    a[4] = 9;
    a[5] = 11;

    build(0, 0, n-1);

    cout<<query(0, 0, n-1, 0, 1)<<"\n";
 
}
