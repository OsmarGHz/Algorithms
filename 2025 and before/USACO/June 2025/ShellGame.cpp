// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int shoot(bool pos[], tuple<int,int,int> a){
    bool aux;
    //Atencion: A todo se resta 1, porque los indices que nos da el juego estan en base 1, pero los queremos en base 0
    aux = pos[get<0>(a)-1];
    pos[get<0>(a)-1] = pos[get<1>(a)-1];
    pos[get<1>(a)-1] = aux;
    return pos[get<2>(a)-1] ? 1 : 0;
    /*
    if(pos[get<2>(a)]) return 1;
    else return 0;
    */
}

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int numOfShells = 3, n, score, maxScore=0;
    int a,b,g;
	bool pos[numOfShells] = {false};
    cin >> n;
    vector<tuple<int,int,int>> swaps(n);
    for (int i = 0; i < n; i++){
        cin >> a >> b >> g;
        swaps[i] = make_tuple(a,b,g);
        //swaps[i] = {a, b, g};
    }
    
    for (int i = 0; i < numOfShells; i++){
        score=0;
        fill(pos,pos+numOfShells,false);
        pos[i] = true;
        for (int j = 0; j < n; j++){
            //tie(a,b,g) = swaps[j];
            if(shoot(pos,swaps[j])) score++;
        }
        if (score>maxScore) maxScore = score;
    }
    
    cout << maxScore;
}
