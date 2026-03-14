#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solveFor(bool clockWise, int corner, vector<vector<ll>> & a,int n){
    ll max_global=0, max_current=0;
    int i, j, last_i, last_j, count=1, direction, avance, maxUp=0, maxDown=n-1, maxLeft=0, maxRight=n-1;
    //Corner disttrib: 1 = UpLeft. 2 = UpRight. 3: DownRight. 4: DownLeft
    switch (corner){
    case 1:
        i = last_i = 0; j = last_j = 0;
        break;
    case 2:
        i = last_i = 0; j = last_j = n-1;
        break;
    case 3:
        i = last_i = n-1; j = last_j = n-1;
        break;
    case 4:
        i = last_i = n-1; j = last_j = 0;
        break;
    default:
        break;
    }

    direction = (clockWise) ? (corner)%4 : (corner+1)%4;
    avance = (clockWise) ? 1 : -1;

    max_current = max_global = a[i][j];

    //cout << "\n\n";
    //cout << direction << " " << avance << "\n";
    //cout << max_current << " " << max_global << "\n";
    //cout << i << " " << j << "\n";


    while (count<n*n){
        //Direction disttrib: 0 = Up. 1 = Right. 2 = Down. 3: Left.
        switch (direction){
        case 0:
            if(i-1>=maxUp){ i--; }
            else{
                direction = (direction+avance+4)%4;
                if(direction==1){
                    j++;
                    maxLeft++;
                }else if(direction==3){
                    j--;
                    maxRight--;
                }
            }
            break;
        case 1:
            if(j+1<=maxRight){ j++; }
            else{
                direction = (direction+avance+4)%4;
                if(direction==2){
                    i++;
                    maxUp++;
                }else if(direction==0){
                    i--;
                    maxDown--;
                }
            }
            break;
        case 2:
            if(i+1<=maxDown){ i++; }
            else{
                direction = (direction+avance+4)%4;
                if(direction==3){
                    j--;
                    maxRight--;
                }else if(direction==1){
                    j++;
                    maxLeft++;
                }
            }
            break;
        case 3:
            if(j-1>=maxLeft){ j--; }
            else{
                direction = (direction+avance+4)%4;
                if(direction==0){
                    i--;
                    maxDown--;
                }else if(direction==2){
                    i++;
                    maxUp++;
                }
            }
            break;
        default:
            break;
        }
        
        max_current = max(a[i][j], max_current+a[i][j]);
        if(max_current>max_global) max_global = max_current;

        last_i = i, last_j = j;

        count++;

        //cout << max_current << " " << max_global << "\n";
        //cout << i << " " << j << "\n";
    }

    return max_global;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    ll maxi=0;
    cin >> n;
    vector<vector<ll>> a(n,vector<ll>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    if(n==1) maxi = max(maxi,a[0][0]);
    else{
        maxi = max(maxi,solveFor(true,1,a,n));
        maxi = max(maxi,solveFor(false,1,a,n));
        maxi = max(maxi,solveFor(true,2,a,n));
        maxi = max(maxi,solveFor(false,2,a,n));
        maxi = max(maxi,solveFor(true,3,a,n));
        maxi = max(maxi,solveFor(false,3,a,n));
        maxi = max(maxi,solveFor(true,4,a,n));
        maxi = max(maxi,solveFor(false,4,a,n));
    }

    cout << maxi;
}