#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long lli;

int closestToTheRight(int param1, vector<int> numbers, int n){
    int left=0, right=n-1, mid, res=0;
    while (left<=right){
        mid = (left + right)/2;
        if (param1 > numbers[mid]){
            left = mid+1;
        }else{
            res = mid;
            right = mid-1;
        }
    }
    return res;
}

int closestToTheLeft(int param1, vector<int> numbers, int n){
    int left=0, right=n-1, mid, res=n-1;
    while (left<=right){
        mid = (left + right)/2;
        if (param1 >= numbers[mid]){
            res = mid;
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return res;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n,q; cin >> n >> q;
    vector <int> numbers(n);
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    int election, param1, param2, counter=0, position1, position2, pos;

    for (int i = 0; i < q; i++){
        cin >> election >> param1;
        if (election==1){
            if (param1 > numbers[n-1]){ // Param1 vs greatest element
                numbers.push_back(param1);
                n++;
                continue;
            }
            pos = closestToTheRight(param1, numbers, n);
            if (numbers[pos]!=param1) numbers[pos] = param1;
        }else{
            cin >> param2;
            position1 = closestToTheRight(param1, numbers, n);
            position2 = closestToTheLeft(param2, numbers, n);
            counter = position2 - position1 + 1;
            cout << counter << "\n";
        }
    }
    
    
}