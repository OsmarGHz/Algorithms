#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

bool canWeWinWithThis(int mid, vector<int> boxes, int n){
    int minimumA = 0, i, j;
    if (mid<=0){
        return false;
    }
    
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
    sort(boxes.begin(), boxes.end());

    int lowL=0, hiL=n, answer, mid;
    //while (lowL<=hiL){

    if (n>0){
        while (lowL<=hiL){
            mid = (lowL+hiL)/2;
            if (canWeWinWithThis(mid, boxes, n)){
                answer = mid;
                hiL = mid-1;
            }else{
                lowL = mid+1;
            }
        }
    }else answer=0;
    /*
    if (lowL==0){
        if (canWeWinWithThis(1, boxes, n)){
            answer = 1;
        }
    }
    */
    
    cout << answer;
    
}