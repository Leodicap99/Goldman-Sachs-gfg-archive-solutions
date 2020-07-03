#include <bits/stdc++.h> 
using namespace std; 
#define int long long
# define pii pair<int,int>
const int maxn=1e6+5;
signed main() { 
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int k;
    cin>>k;
    queue<char> st;
    for(int i=0;i<s.size();i++)
    {
        while(!st.empty() && st.front()>s[i] &&(st.size()+s.size()-i-1)>=k)
            st.pop();
        st.push(s[i]);
    }
    string ans;
    while(k--)
    {
        ans+=st.front();
        st.pop();
    }
    cout<<ans;
    return 0;
}