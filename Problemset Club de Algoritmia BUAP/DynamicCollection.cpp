#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long lli;

int closestToTheRight(int param1, vector<int> numbers, int n){
    int left=0, right=n-1, mid, res=-1;
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
    int left=0, right=n-1, mid, res=n;
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
    int election[q], param1[q], param2[q], counter=0, position1, position2, pos;
    for (int i = 0; i < q; i++){
        cin >> election[i] >> param1[i];
        if(election[i]==2) cin >> param2[i];
    }

    for (int i = 0; i < q; i++){
        if (election[i]==1){
            if (param1[i] > numbers[n-1]){ // Param1 vs greatest element
                numbers.push_back(param1[i]);
                n++;
                continue;
            }
            pos = closestToTheRight(param1[i], numbers, n);
            if (numbers[pos]!=param1[i]) numbers[pos] = param1[i];
        }else{
            position1 = closestToTheRight(param1[i], numbers, n);
            position2 = closestToTheLeft(param2[i], numbers, n);
            counter = position2 - position1 + 1;
            cout << counter << "\n";
        }
    }
    
    
}