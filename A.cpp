using namespace std;

#include <iostream>
#include <cmath>

int main() {
    std::string s,s1;
    int m[101],m1[101],m2[11],m3[11];
    int n,sum,i;
    n=0;
    sum=0;
    i=0;
    cin >> n;
    for (i=1;i<=9;i++) {
        m2[i]=0;
        m3[i]=0;
    }
    for (i=0;i<n;i++) {
        cin >> s;
        if (s=="M") {m[i]=1;}
        if (s=="S") {m[i]=2;}
        if (s=="L") {m[i]=3;}
        if (s=="XS") {m[i]=4;}
        if (s=="XL") {m[i]=5;}
        if (s=="XXS") {m[i]=6;}
        if (s=="XXL") {m[i]=7;}
        if (s=="XXXS") {m[i]=8;}
        if (s=="XXXL") {m[i]=9;}
    }
    for (i=0;i<n;i++) {
        cin >> s;
        if (s=="M") {m1[i]=1;}
        if (s=="S") {m1[i]=2;}
        if (s=="L") {m1[i]=3;}
        if (s=="XS") {m1[i]=4;}
        if (s=="XL") {m1[i]=5;}
        if (s=="XXS") {m1[i]=6;}
        if (s=="XXL") {m1[i]=7;}
        if (s=="XXXS") {m1[i]=8;}
        if (s=="XXXL") {m1[i]=9;}
    }
    for (i=0;i<n;i++) {
        m2[m[i]] += 1;
        m3[m1[i]] += 1;
    }
    for (i=1;i<=9;i++) {
        m2[i] = abs(m2[i] - m3[i]);
    }
    for (i=1;i<=9;i++) {
        sum += m2[i];
    }
    sum=sum/2;
    cout << (sum);
    return 0;
}