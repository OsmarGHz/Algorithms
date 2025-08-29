#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define pb push_back

int power(int a, int b){
    int res=a;
    for(int i=1;i<b;i++){
        res*=a;
    }
    return res;
}

int main(){
    ll n,tope;
    string muestra;
    int counter=0;
    cin>>n;
    vector<ll> comb;
    for(int i=2;i<=10;i+=2){
        tope = power(2,i);
        //cout << tope << " ";
        for(int j=0;j<tope;j++){
            if(__builtin_popcount(j)==i-__builtin_popcount(j)){
                //cout << __builtin_popcount(j) << i-__builtin_popcount(j) << "\n"; 
                muestra.clear();
                muestra.resize(i);
                for(int k=i-1,l=0;k>=0;k--,l++){
                    if((1&(j>>k))==1){
                        muestra[l]='7';
                    }else{
                        muestra[l]='4';
                    }
                }
                //cout << muestra << " ";
                comb.pb(stoll(muestra));
                counter++;
                //cout << counter << " ";
            }
        }
    }

    sort(all(comb));
    cout << *lower_bound(all(comb),n);
    // ll n,temp;
    // int num4,num7,num8,foreign;
    // short complete=0;
    // string s;
    // cin>>n;
    // s = to_string(n);
    
    // if(s.size()%2==0 && !((s[0]-48)>=8)){
    //     num4=num7=foreign=0;
    //     for(int i=0;i<s.size();i++){
    //         if((s[i]-48)==7){
    //             num7++;
    //         }else if((s[i]-48)==4){
    //             num4++;
    //         }else{
    //             foreign++;
    //             break;
    //         }
    //     }
 
    //     if(num4==num7 && foreign==0){
    //         cout << n;
    //         return 0;
    //     }
 
    //     while(complete!=1){
    //         n++;
    //         if(to_string(n).size()%2==0 && (n%10==4 || n%10==7)){
    //             temp = n;
    //             num4=num7=0;
    //             while(temp!=0){
    //                 if(temp%10==4){
    //                     num4++;
    //                     temp/=10;
    //                 }else if(temp%10==7){
    //                     num7++;
    //                     temp/=10;
    //                 }else{
    //                     break;
    //                 }
    //             }
    //             if(temp==0 && (num4==num7)){
    //                 complete++;
    //             }
    //         }
    //     }
    // }else{
    //     int i;
    //     //cout << "a";
    //     if(s.size()%2==0){
    //         for(i=0;i<(s.size()+2)/2;i++){
    //             cout << "4";
    //         }
    //         for(;i<s.size()+2;i++){
    //             cout << "7";
    //         }
    //     }else{
    //         for(i=0;i<(s.size()+1)/2;i++){
    //             cout << "4";
    //         }
    //         for(;i<s.size()+1;i++){
    //             cout << "7";
    //         }
    //     }
    //     return 0;
    // }
 
    // if(complete==0){
    //     int i;
    //     //cout << "b";
    //     for(i=0;i<(s.size()+2)/2;i++){
    //         cout << "4";
    //     }
    //     for(;i<s.size()+2;i++){
    //         cout << "7";
    //     }
    // }
 
    // cout << n;
}