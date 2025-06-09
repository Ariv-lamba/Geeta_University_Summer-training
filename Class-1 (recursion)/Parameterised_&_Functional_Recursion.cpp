// Parameterised Way of solving problems
include <iostream>
using namespace std;

void fun(int n,  int sum){
   if(n==0){
       cout << sum << endl;
       return;
   }
  
   fun(n-1, sum+n);
}

int main() {
  
    int n;
    cin>>n;
    int sum =0;
    fun(n, sum);
    return 0;
}

// Functional way of problem solving recursion 

#include <iostream>
using namespace std;

int fun(int n){
   if(n==0){
       return 0;
   }
  return n+fun(n-1);
}

int main() {
    int n;
    cin>>n;
   cout <<  fun(n);
    return 0;
}
