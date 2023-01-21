#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,smax,sp;
    int z=0;
    int max=0;
    bool b=true;
    bool bsub=false;
    cin>>s;
    for(int i=0;i<s.length();i++)
     for(int j=i+1;j<s.length();j++){
      if(s[i]==s[j]){
      sp=s.substr(i,j-i+1);
      b=true;
      z=0;
       while((z<=(sp.length()-1)/2)&&b){
         b=(sp[z]==sp[sp.length()-z-1]);
         z++;}
       if((b==true)&&(max<sp.length())){
                                   max=sp.length();
                                   smax="";
                                   smax=sp;
                                   bsub=true;
                                   }
       b=true;
       z=0;}}
      if(bsub==true)cout<<smax;
      else
      cout<<s[0];
      cin.get();
      cin.get();
     return 0;
}