// Reverse an array using recursion

#include <iostream>
using namespace std;

void fun(int i, int n, int arr[]){
   if(i>(n+1)/2){
       return;
   }
   swap(arr[n-1-i], arr[i]);
    fun(i+1, n, arr);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array before Recursion = ";
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Array after Recurison = ";
    fun(0, n, arr);
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}


// check if a string is palindrome or not using recursion

#include <iostream>
using namespace std;

bool fun(string &s, int n, int i){
   if(i>n+1/2){
       return true;
   }
   if(s[n-1-i]!=s[i])return false;
   return fun(s, n, i+1);
}

int main() {

    string s;
    getline(cin, s);
    int n = s.size();
   cout <<  fun(s, n, 0);
    
    return 0;
}
