#include <iostream>
#include <vector>
using namespace std;
typedef long long int lli;

int pivotIndex(vector<int>& nums) {
    vector <lli> suffixNums; //SUFFIX!? Check this point
    int sizeOfPI, i;
    sizeOfPI = nums.size();
    suffixNums.resize(sizeOfPI);
    suffixNums[0] = nums[0];
    for(i=1; i<sizeOfPI; i++){
        suffixNums[i] = suffixNums[i-1] + nums[i];
    }
    if(suffixNums[sizeOfPI-1]-suffixNums[0]==0) return 0;
    for(i=1; i<sizeOfPI; i++){
        if(suffixNums[i-1]==suffixNums[sizeOfPI-1]-suffixNums[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int nElements, i;
    cin >> nElements;
    vector <int> numeros (nElements);
    for (i = 0; i < numeros.size(); i++){
        cin >> numeros[i];
    }
    printf("%d", pivotIndex(numeros));
}