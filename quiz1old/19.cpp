#include <bits/stdc++.h>
using namespace std;

void roma(int n){
if(n == 0) return;
roma(n/10);
int k = n % 10;
cout << k << " ";

}
int main(){
    int n;
    cin >> n;
    roma(n);
    return 0;
}