#include <bits/stdc++.h>

using namespace std;

int main()
{
    //SUN, MON, TUE, WED, THU, FRI, or SAT
    int MON = 1, TUE = 2, WED = 3, THU = 4, FRI = 5, SAT = 6, SUN = 7;
    string q;
    cin >> q;
    if(q == "MON") {cout <<SUN-MON; return 0;}
    if(q == "TUE") {cout <<SUN-TUE; return 0;}
    if(q == "WED") {cout <<SUN-WED; return 0;}
    if(q == "THU") {cout <<SUN-THU; return 0;}
    if(q == "FRI") {cout <<SUN-FRI; return 0;}
    if(q == "SAT") {cout <<SUN-SAT; return 0;}
    if(q == "SUN") {cout <<SUN; return 0;} 
}