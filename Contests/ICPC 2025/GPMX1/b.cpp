#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solveFor(bool clockWise, int corner, vector<vector<ll>> & a,int n, vector<vector<ll>> & maxBe){
    ll maxi=0;
    int maxUp=0, maxDown=n, maxLeft=0, maxRight=n, direction, i, j, counter=0;

    for (int k = 0; k < n; k++) fill(maxBe[k].begin(),maxBe[k].end(),LLONG_MIN);
    //maxBe.assign(n, vector<ll>(n, LLONG_MIN));

    //Corner disttrib: 1 = UpLeft. 2 = UpRight. 3: DownRight. 4: DownLeft
    //Direction disttrib: 0 = Up. 1 = Right. 2 = Down. 3: Left.

    if(clockWise){
        direction = corner%4;
    }else{
        direction = (corner+1)%4;
    }

    if(corner==1) i = 0, j = 0;
    else if(corner==2) i = 0, j = n-1;
    else if(corner==3) i = n-1, j = n-1;
    else if(corner==4) i = n-1, j = 0;

    //cout << i << " " << j << " " << direction << "\n";
    
    maxBe[i][j] = a[i][j];
    maxi = max(maxi,a[i][j]);

    if(direction==0){ i--; }
    else if(direction==1){ j++; }
    else if(direction==2){ i++; }
    else if(direction==3){ j--; }
    counter++;

    while (counter<n*n){
        //cout << i << " " << j << " " << direction << "\n";

        if (j+1<n && maxBe[i][j+1]!=LLONG_MIN) maxBe[i][j] = max(maxBe[i][j],maxBe[i][j+1]);
        if (j-1>=0 && maxBe[i][j-1]!=LLONG_MIN) maxBe[i][j] = max(maxBe[i][j],maxBe[i][j-1]);
        if (i+1<n && maxBe[i+1][j]!=LLONG_MIN) maxBe[i][j] = max(maxBe[i][j],maxBe[i+1][j]);
        if (i-1>=0 && maxBe[i-1][j]!=LLONG_MIN) maxBe[i][j] = max(maxBe[i][j],maxBe[i-1][j]);

        maxBe[i][j] += a[i][j];

        maxi = max(maxi,maxBe[i][j]);
        //cout << maxi << " ";

        if(direction==0){
            if (i-1>=maxUp) i--;
            else if(clockWise){
                direction = direction+1;
                j++;
                maxLeft++;
            }else{
                direction = 3;
                j--;
                maxRight--;
            }
        }else if(direction==1){
            if(j+1<maxRight) j++;
            else if(clockWise){
                direction = direction+1;
                i++;
                maxUp++;
            }else{
                direction = direction-1;
                i--;
                maxDown--;
            }
        }else if(direction==2){
            if(i+1<maxDown) i++;
            else if(clockWise){
                direction = direction+1;
                j--;
                maxRight--;
            }else{
                direction = direction-1;
                j++;
                maxLeft++;
            }
        }else if(direction==3){
            if(j-1>=maxLeft) j--;
            else if(clockWise){
                direction = 0;
                i--;
                maxDown--;
            }else{
                direction = direction-1;
                i++;
                maxUp++;
            }
        }

        counter++;
    }

    
    
    for (int k = 0; k < n; k++){
        for (int l = 0; l < n; l++){
            cout << maxBe[k][l] << " ";        
        }
        cout << "\n";
    }
    
    

    cout << "\n";
    return maxi;
}

int main(){
    int n;
    ll maxi=0;
    cin >> n;
    vector<vector<ll>> a(n,vector<ll>(n)), maxBe(n,vector<ll>(n,LLONG_MIN));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    if(n==1) maxi = max(maxi,a[0][0]);
    else{
        maxi = max(maxi,solveFor(true,1,a,n,maxBe));
        maxi = max(maxi,solveFor(false,1,a,n,maxBe));
        maxi = max(maxi,solveFor(true,2,a,n,maxBe));
        maxi = max(maxi,solveFor(false,2,a,n,maxBe));
        maxi = max(maxi,solveFor(true,3,a,n,maxBe));
        maxi = max(maxi,solveFor(false,3,a,n,maxBe));
        maxi = max(maxi,solveFor(true,4,a,n,maxBe));
        maxi = max(maxi,solveFor(false,4,a,n,maxBe));
    }

    cout << maxi;
}