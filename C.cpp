using namespace std;

#include <iostream>
#include <cmath>
#include <algorithm>

long long Partition(long long a[100020],long long b[100020], long long l, long long r) {
    int i,j,x;
    i = l - 1;
    j = r + 1;
    x = a[l];
    while (i==i) {
        while (a[i] >= x) {
            i += 1;
        }
        while (a[j] <= x) {
            j -= 1;
        }
    if (i<j) {
        a[i]^=a[j];
        a[j]^=a[i];
        a[i]^=a[j];
        b[i]^=b[j];
        b[j]^=b[i];
        b[i]^=b[j];
    }
    else {
        return(j);
    }

    }
}

long long QuickSort(long long a[100020],long long b[100020], long long l, long long r) {

if (l>=r) {
    return 0;
}
int j;
j=Partition(a,b,l,r);
QuickSort(a,b,l,j);
QuickSort(a,b,j+1,r);
}

int main() {
    long long m[100020],m1[100020],m2[100020];
    long long i,n,tek,t,sum,kk;
    cin >> n;
    for (i=1;i<=n;i++) {
        cin >> m[i * 2] >> m[i * 2 + 1];
        m1[i * 2] = 1;
        m1[i * 2 + 1] = 2;
        QuickSort(m, m1, 2, n * 2 + 1);
        tek = m[2];
        t = 1;
        for (i = 3; i <= n * 2 + 1; i++) {
            if (m1[i] == 1) {
                m2[t] = m2[t] + m[i] - tek;
                t += 1;
            } else {
                m2[t] = m2[t] + m[i] - tek + 1;
                t -= 1;
            }
            tek = m[i];
        }
        for (i = 1; i <= n; i++) {
            cout << m2[i] <<  ' ';
        }
    }
    return 0;
}