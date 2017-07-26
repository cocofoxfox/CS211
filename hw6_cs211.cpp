#include <iostream>
using namespace std;

void backtrack(int &c){
    c--;
    if (c==-1) {
        exit(0);
    }
}

void print(int x[], int &count) {
    cout<<"Solution No "<<count<<" :"<<endl<<endl;
    for(int k=0;k<8;k++){
        cout<<x[k]<<" ";
    }
    cout<<endl<<endl;

}

bool ok(int a[8], int b, int c) {
    for(int i=0; i<b; i++) {
        if (a[i]==a[b]||(abs(a[b]-a[c]) == 1)) return false;
    }
    return true;
}


int main() {
    int q[8]={0}, c=0, i=0, count=0;
    int helperArray[8][5] = {
        {-1,-1,-1,-1,-1},
        { 0,-1,-1,-1,-1},
        { 0,-1,-1,-1,-1},
        { 0, 1, 2,-1,-1},
        { 0, 1, 3,-1,-1},
        { 1, 4,-1,-1,-1},
        { 2, 3, 4,-1,-1},
        { 3, 4, 5, 6,-1} };

    while(1){
        while(c<8) {
            q[c]++;
            if (q[c]>8) {
                q[c]=0;
                backtrack(c);
                continue;
            }
            for(i=0; i<5; i++) {
                if(helperArray[c][i]==-1){
                    c++;
                    if(c==8) {
                        print(q,++count);
                        backtrack(c);
                    }
                    break;
                }
                if(ok(q,c,helperArray[c][i])==false) break;
            }

        }
    }
}
