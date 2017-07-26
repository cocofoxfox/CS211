#include <iostream>
#include <cstdlib>
using namespace std;


bool ok(int q[], int c){
    for(int i=0; i<c; i++)
        if(q[c]==q[i] || (c-i)==abs(q[c]-q[i]))
            return false;
    return true;
}


void backtrack(int &c){
    c--;
    if(c==-1){
        exit(0);
    }
}

void print(int q[]){
    static int count =1;
    cout<< count++<<endl;
    int i;
    for(i=0; i<8; i++)
        cout<<q[i];
    cout<<endl;
}

int main(){
    int q[8]; q[0]=0;
    int c=1;

    bool n=false;

    while(1){
        while(c<8){

            if(!n)q[c]=-1;
            n=true;

            while(q[c]<8){
                q[c]++;

                if(q[c]==8){
                    n=true;
                    backtrack(c);
                    break;
                }

                if(ok(q,c)){
                    n=false;
                    c++;
                    break;
                }

            }

        }
        print(q);
        n=true;
        backtrack(c);
    }


}
