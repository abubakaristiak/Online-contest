#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int x, y, z;
    cin >> x >> y >> z;
    int res=(x-(y*z));
    if(res<0){
        cout << -1 << endl;
    }else cout << res << endl;
    
    return 0;


// Alhamdulillah
}