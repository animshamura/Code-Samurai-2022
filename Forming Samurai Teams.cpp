#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t,n;
    string a;
    cin>>t;
    int ar [26];
    int ind;
    while(t--){
        cin>>n;
        for(int i = 0; i < 26; i++) ar[i]=0;
        int k = 0;
        char p;
        string s = "";
        while(n--) {
            cin>>a;
            ind = (int)a[0]-97;
            ar[ind]++;
            if(ar[ind]==3){
            k=1;
            p=(char)(ind+97);
            s+=p;
            }
        }
       sort(s.begin(), s.end());
        if(k==1) cout<<s<<endl;
        else cout<<"impossible\n";
    }

    return 0;
}
