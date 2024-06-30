#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int lli;

bool averiguar(vector<int> robots, int nRobots, lli maxCharge, int mid){
    int i;
    lli currentSum = 0;
    for (i = 0; i < mid; i++) currentSum += robots[i];
    if (currentSum>maxCharge) return false;
    for (; i < nRobots; i++){
        currentSum += robots[i];
        currentSum -= robots[i-mid];
        if (currentSum>maxCharge) return false;
    }
    return true;  
}

int main(){
    lli maxCharge;
    int nRobots;
    scanf("%i %lli", &nRobots, &maxCharge);
    int ini=0, fin=nRobots, mid, res=0;
    vector <int> robots(nRobots);
    for (int i = 0; i < nRobots; i++) scanf("%i", &robots[i]);
    while (ini<=fin){
        mid = (ini+fin)/2;
        if (averiguar(robots, nRobots, maxCharge, mid)){
            res = mid;
            ini = mid+1;
        }else fin = mid-1;
    }
    printf("%i", res);
}