#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main(){
    int n;
    cin >> n;
    vector<int> boxes(n);
    for (int i = 0; i < n; i++) cin >> boxes[i];
    sort(boxes.begin(), boxes.end());

    int currentIndex, reference, actual, counter=0;
    while (!boxes.empty()){
        counter++;
        currentIndex = boxes.size()-1, reference = boxes[currentIndex];
        boxes.erase(boxes.begin()+currentIndex);
        currentIndex--;
    }
    
    for (int i = boxes.size()-2; i >= 0; i--){
        reference--;
        if (reference<0){
            counter++;
        }
        
        actual = boxes[i];
        if (actual < reference){
            reference = actual;
        }
        
    }
    cout << counter;
    
}