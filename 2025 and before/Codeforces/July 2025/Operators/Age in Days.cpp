#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,years,months,days;
    cin >> n;
    years=n/365;
    n%=365;
    months=n/30;
    days=n%30;
    cout << years << " years" << "\n";
    cout << months << " months" << "\n";
    cout << days << " days" << "\n";
}