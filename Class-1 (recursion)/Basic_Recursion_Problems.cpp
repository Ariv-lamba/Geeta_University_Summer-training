//  Print 1 to N .
#include <iostream>
using namespace std;

void fun(int i, int n){
    if(i == n+1)return;
   cout << i << endl;
    fun(i+1, n);
}

int main() {
  
    int n;
    cin>>n;
    fun(1, n);

    return 0;
}

// Print N to 1

#include <iostream>
using namespace std;

void fun(int n){
    if(n==0)return;
    cout << n << " ";
    fun(n-1);
}

int main() {
  
    int n;
    cin>>n;
    fun(n);

    return 0;
}


// Print 1 to M backtracking 

#include <iostream>
using namespace std;

void fun(int i, int n){
    if(i == n)return;
    fun(i+1, n);
    cout << (n-i) << endl;
}

int main() {
  
    int n;
    cin>>n;
    fun(0, n);

    return 0;
}

// Print N to 1 in Backtracking 

#include <iostream>
using namespace std;

void fun(int i, int n){
    if(i == n+1)return;
    fun(i+1, n);
    cout << (i) << endl;
}

int main() {
  
    int n;
    cin>>n;
    fun(1, n);

    return 0;
}

// Print name 5 times 

#include <iostream>
using namespace std;

void fun( int n){
   if(n==0)return;
   cout << "Ariv Lamba "<< endl;
   fun(n-1);
}

int main() {
  
    int n;
    cin>>n;
    fun(n);

    return 0;
}
