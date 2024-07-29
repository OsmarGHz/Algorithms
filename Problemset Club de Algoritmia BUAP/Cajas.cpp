#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

bool canWeWinWithThis(int mid, vector<int> boxes, int n){
    int minimumA = 0, i, j;
    for (i = 0; i < n;){
        for (j = 0; j < mid && i < n; j++){
            if (boxes[i]>=minimumA){
                i++;
            }else return false;
        }
        minimumA++;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> boxes(n);
    for (int i = 0; i < n; i++) cin >> boxes[i];
    if (n<=10) sort(boxes.begin(), boxes.end());

    int lowL=0, hiL=n, answer, mid;
    mid = (lowL+hiL)/2;
    while (lowL<=hiL){
        mid = (lowL+hiL)/2;
        if (mid>0){
            if (canWeWinWithThis(mid, boxes, n)){
                answer = mid;
                hiL = mid - 1;
            }else{
                lowL = mid + 1;
            }
        }else break;
    }
    
    cout << answer;
    
}