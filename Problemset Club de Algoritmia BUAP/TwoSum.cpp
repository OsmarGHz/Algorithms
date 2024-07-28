#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <vector>
#include <set>
using namespace std;

/*
vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> result(2);
    for (int i = 0; i < nums.size()-1; i++){
        for (int j = i+1; j < nums.size(); j++){
            if (nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    return result;
}
*/

/*
vector<int> twoSum(vector<int>& nums, int target){
    vector <int> result(2);
    unordered_map <int,int> mapa;
    int difference;
    for (int i = 0; i < nums.size(); i++){
        mapa.insert(pair<int,int> (nums[i], i));
    }
    for (int i = 0; i < nums.size()-1; i++){
        difference = target - nums[i];
        if (mapa.count(difference) == 1){
            if (mapa[difference] != i){
                result[0] = i;
                result[1] = mapa[difference];
                break;
            }
        }
    }
    return result;
}
*/
/*
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> numMap;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }

    return {}; // No solution found
} */

vector<int> twoSum(vector<int>& nums, int target){
    vector <int> result(2);
    unordered_map <int,vector<int>> mapa;
    int difference;
    for (int i = 0; i < nums.size(); i++){
        if (mapa.count(nums[i])==0) mapa.insert(pair<int,vector<int>> (nums[i], vector<int> (1,i)));
        else mapa[nums[i]].push_back(i);
    }
    for (int i = 0; i < nums.size()-1; i++){
        difference = target - nums[i];
        if (mapa.count(difference) == 1){
            for (int j = 0; j < mapa[difference].size(); j++){
                if (mapa[difference][j] != i){
                    result[0] = i;
                    result[1] = mapa[difference][j];
                    break;
                }
            }
        }
    }
    return result;
}

int main(){
    int longitud, target;
    vector <int> array;
    cout << "Ingrese el target: ";
    cin >> target;
    cout << "Longitud: ";
    cin >> longitud;
    array.resize(longitud);
    cout << "Ingrese cada digito del arreglo: ";
    for (int i = 0; i < longitud; i++){
        // int miVariable
        // cin >> miVariable;
        // array[i].push_back(miVariable);
        cin >> array[i];
    }
    vector<int> resultado = twoSum(array, target);
}