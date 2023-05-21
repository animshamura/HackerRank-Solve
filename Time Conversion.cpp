#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]=='1'&&s[1]=='2') {if(s[8]=='A') s[0]='0',s[1]='0';}                 
    else if(s[8]=='P'){ s[0]=char(s[0]+1); s[1]=char(s[1]+2);}
    s.resize(8);
    cout<<s<<endl;
    return 0;
}
