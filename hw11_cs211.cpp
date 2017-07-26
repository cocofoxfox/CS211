#include <iostream>
using namespace std;
int fib(int n){
if(n==1 || n==2) return 1;
return fib(n-1)+fib(n-2);
};
int main(){
for(int i=1; i<70; i++)
cout<<" fib("<<i<<") = "<<fib(i)<<endl;
return 0;
}
