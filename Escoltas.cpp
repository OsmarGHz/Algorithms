#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

void ordenar3Posiciones(vector<lli> &vToAnalize){
    lli temp;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if (vToAnalize[j] > vToAnalize[j+1]){
                temp = vToAnalize[j];
                vToAnalize[j] = vToAnalize[j+1];
                vToAnalize[j+1] = temp;
            }
        }
    }
}

lli closestToTheRight(vector<lli> &vToAnalize, lli target){
    lli infL = -1, supL = vToAnalize.size(), mid;
    while (supL>infL+1){
        mid = (infL + supL)/2;
        if (target>vToAnalize[mid]) infL = mid;
        else supL = mid;
    }
    return supL+1;
}

lli closestToTheLeft(vector<lli> &vToAnalize, lli target){
    lli infL = -1, supL = vToAnalize.size(), mid;
    while (supL>infL+1){
        mid = (infL + supL)/2;
        if (target>=vToAnalize[mid]) infL = mid;
        else supL = mid;
    }
    return supL;
}



vector <lli> searchComplementary(int i, vector<lli> &pivot, vector<lli> &secondaryOne, vector<lli> &secondaryTwo, lli *diffTemp){
    map <lli,int> differences;
    lli closestLeft1, closestLeft2, closestRight1, closestRight2;
    vector <lli> option1(3), option2(3), option3(3), option4(3);
    vector <lli> orderedOption1, orderedOption2, orderedOption3, orderedOption4;
    //It returns indexes+1
    closestLeft1 = closestToTheLeft(secondaryOne, pivot[i]);
    closestLeft2 = closestToTheLeft(secondaryTwo, pivot[i]);
    closestRight1 = closestToTheRight(secondaryOne, pivot[i]);
    closestRight2 = closestToTheRight(secondaryTwo, pivot[i]);
    if (closestLeft1 != 0){
        if (closestLeft2 != 0){
            option1 = {pivot[i], secondaryOne[closestLeft1-1], secondaryTwo[closestLeft2-1]};
            orderedOption1 = option1;
            //sort(orderedOption1.begin(), orderedOption1.end());
            ordenar3Posiciones(orderedOption1);
            differences.insert(pair<lli,int> (orderedOption1[2] - orderedOption1[0], 1));
        }
        if (closestRight2 != (secondaryTwo.size())+1){
            option2 = {pivot[i], secondaryOne[closestLeft1-1], secondaryTwo[closestRight2-1]};
            orderedOption2 = option2;
            //sort(orderedOption2.begin(), orderedOption2.end());
            ordenar3Posiciones(orderedOption2);
            differences.insert(pair<lli,int> (orderedOption2[2] - orderedOption2[0], 2));
        }
    }
    if (closestRight1 != (secondaryOne.size())+1){
        if (closestLeft2 != 0){
            option3 = {pivot[i], secondaryOne[closestRight1-1], secondaryTwo[closestLeft2-1]};
            orderedOption3 = option3;
            //sort(orderedOption3.begin(), orderedOption3.end());
            ordenar3Posiciones(orderedOption3);
            differences.insert(pair<lli,int> (orderedOption3[2] - orderedOption3[0], 3));
        }
        if (closestRight2 != (secondaryTwo.size())+1){
            option4 = {pivot[i], secondaryOne[closestRight1-1], secondaryTwo[closestRight2-1]};
            orderedOption4 = option4;
            //sort(orderedOption4.begin(), orderedOption4.end());
            ordenar3Posiciones(orderedOption4);
            differences.insert(pair<lli,int> (orderedOption4[2] - orderedOption4[0], 4));
        }
    }
    
    switch ((*differences.begin()).second){
    case 1:
        *diffTemp = (*differences.begin()).first;
        return option1;
        break;
    case 2:
        *diffTemp = (*differences.begin()).first;
        return option2;
        break;
    case 3:
        *diffTemp = (*differences.begin()).first;
        return option3;
        break;
    case 4:
        *diffTemp = (*differences.begin()).first;
        return option4;
        break;
    default:
        return vector <lli> {0,0,0};
        break;
    }
}

vector <lli> searchAround(vector<lli> &pivot, vector<lli> &secondaryOne, vector<lli> &secondaryTwo, int tamano){
    lli diffTemp, diff;
    vector <lli> temp, minSearch;
    minSearch = searchComplementary(0, pivot, secondaryOne, secondaryTwo, &diff);
    for (int i = 1; i < tamano; i++){
        temp = searchComplementary(i, pivot, secondaryOne, secondaryTwo, &diffTemp);
        if (diffTemp<diff){
            diff = diffTemp;
            minSearch = temp;
        }
    }
    return minSearch;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector <lli> a(n), b(m), c(k), result(3);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < k; i++) cin >> c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    result = searchAround(a, b, c, n);
    cout << result[0] << ' ' << result[1] << ' ' << result[2];
}