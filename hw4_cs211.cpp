#include <iostream>
using namespace std;
int main(){
    int b[8][8]={0},r,c=0,i,count=1;
    b[0][0]=1;

nc:c++;  //next column
   if(c==8)
       goto print;

   r=-1;

nr:r++;  //next row
   if(r==8)
       goto backtrack;

   for(i=0;i<c;i++){  //row test
       if(b[r][i]==1)
           goto nr;
   }

   for(i=1;(r-i)>=0&&(c-i)>=0;i++){  //diagonal up doing test
       if(b[r-i][c-i]==1)
           goto nr;
   }

   for(i=1;(r+i)<8&&(c-i)>=0;i++){  //diagonal down doing test
       if(b[r+i][c-i]==1)
           goto nr;
   }
   b[r][c]=1;
   goto nc;

	 backtrack:  //backtrack to left closest column
   c--;
   if(c==-1)  //terminate program
       return 0;
   r=0;
   while(b[r][c]!=1)  //find left closest queen and reset it
       r++;
   b[r][c]=0;
   goto nr;

print:
   cout<<"solution#"<<count<<":"<<endl;
   for(int row=0;row<8;row++){
       for(int col=0;col<8;col++){
           cout<<b[row][col];
       }
       cout<<endl;
   }
   count++;
   cout<<endl;
   goto backtrack;
}
