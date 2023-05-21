#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; 
    cin>>t;
    int ar [t];
    for(int i = 0; i < t; i++ ) cin>>ar[i];
    sort(ar,ar+t);
    int j = 1;
    for(int i = t-2; i >= 0; i-- ) {
        if(ar[i]== ar[t-1]) j++;
        else break;
    }
    cout<<j<<endl;
    return 0;
}
