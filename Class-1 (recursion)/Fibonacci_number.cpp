// fibonacci number 

#include <iostream>
using namespace std;

int fun(int n){
    
  if(n == 1|| n==0)return 1;
  return fun(n-1)+fun(n-2);
}

int main() {

    int n;
    cin>>n;
    cout <<  fun(n);
    
    return 0;
}
// fibonacci series 1 1 2 3 5 8 13 21 34 55 89 149 238 387

//
