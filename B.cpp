using namespace std;

#include <iostream>
#include <cmath>

int main() {
    long long max,neww,i,n,m,sum,sumch,sumnh;
    long long mas[100020],otr[100020];
    cin >> n >> m;
    mas[0]=0;
    max=0;
    neww=0;
    i=0;
    sum=0;
    sumnh=0;
    sumch=0;
    mas[n+1]=m;
    for (i=1;i<=n;i++) {
        cin >> mas[i];
    }
    for(i=1;i<=n+1;i++) {
        otr[i] = mas[i] - mas[i - 1];
    }
    sumch=0;
    sumnh=0;
    for (i=1;i<=n+1;i++) {
        if (i % 2 == 0) { sumch += otr[i]; }
        else { sumnh += otr[i]; }
    }
    max=sumnh;
    sum=0;
    neww=0;
    for (i=1;i<=n+1;i++) {
        if (i % 2 == 0) { sumch -= otr[i]; }
        else { sum += otr[i]; }
        neww = sum + sumch - 1;
        if (max < neww) { max = neww; }
    }
    cout << max;
    return 0;
}