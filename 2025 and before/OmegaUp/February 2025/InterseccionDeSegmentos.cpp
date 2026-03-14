#include <iostream>
using namespace std;
using lli = long long;

int main(){
    float x1e1,y1e1,x2e1,y2e1,x1e2,y1e2,x2e2,y2e2,m1,m2;
    float coex1,coey1,coex2,coey2,cons1e1,cons1e2,cons2e1,cons2e2,consfe1,consfe2,deltax,deltay,deltas,x,y;
    cin >> x1e1 >> y1e1 >> x2e1 >> y2e1>> x1e2 >> y1e2 >> x2e2>> y2e2;
    
    m1 = (y2e1-y1e1)/(x2e1-x1e1);
    m2 = (y2e2-y1e2)/(x2e2-x1e2);
    
    coey1=1;
    cons1e1 = -y1e1;
    coex1 = m1;
    cons2e1 = (-x1e1)*m1;
    consfe1 = cons2e1 - cons1e1;
    coex1 = -coex1;

    coey2=1;
    cons1e2 = -y1e2;
    coex2 = m2;
    cons2e2 = (-x1e2)*m2;
    consfe2 = cons2e2 - cons1e2;
    coex2 = -coex2;

    deltas = (coex1*coey2)-(coex2*coey1);
    deltax = (consfe1*coey2)-(consfe2*coey1);
    deltay = (coex1*consfe2)-(coex2*consfe1);

    x = deltax/deltas;
    y = deltay/deltas;

    float xmayore1, ymayore1, xmenore1, ymenore1, xmayore2, ymayore2, xmenore2, ymenore2;

    if (x1e1>=x2e1){
        xmayore1=x1e1;
        xmenore1=x2e1;
    }else{
        xmayore1=x2e1;
        xmenore1=x1e1;
    }

    if (y1e1>=y2e1){
        ymayore1=y1e1;
        ymenore1=y2e1;
    }else{
        ymayore1=y2e1;
        ymenore1=y1e1;
    }
    
    if (x1e2>=x2e2){
        xmayore2=x1e2;
        xmenore2=x2e2;
    }else{
        xmayore2=x2e2;
        xmenore2=x1e2;
    }

    if (y1e2>=y2e2){
        ymayore2=y1e2;
        ymenore2=y2e2;
    }else{
        ymayore2=y2e2;
        ymenore2=y1e2;
    }

    if (!(x>=xmenore1 && x<=xmayore1 && x>=xmenore2 && x<=xmayore2 && y>=ymenore1 && y<=ymayore1 && y>=ymenore2 && y<=ymayore2)){
        x=-1;
        y=-1;
        cout << x << " " << y;
    }else{
        printf("%.6f %.6f",x,y);
    }
}