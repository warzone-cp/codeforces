    #include<bits/stdc++.h>
    #define ll long long
    #define pb push_back
    #define f first
    #define s second
    #define MOD 1000000007
    #define nline    "\n"
    #define op(v)     for(auto g : v){cout<<g<<" ";}cout<<nline;
    #define op2(v)    for(auto g : v){cout<<g.first<<" "<<g.second<<endl;}
    #define in(v,n)   for(int i=0;i<n;i++){ll x; cin>>x; v.pb(x);}
    #define sorti(v)  sort(v.begin(),v.end())
    #define rev(v)    reverse(v.begin(),v.end())
    #define yes       cout<<"YES"<<nline;
    #define no        cout<<"NO"<<nline;
    #define norep(v)  v.erase(unique(v.begin(),v.end()),v.end())
    #define charon    ios_base::sync_with_stdio(false);  cout.tie(0); cin.tie(0);  
    #define maxi(v)   *max_element(v.begin(),v.end())
    #define mini(v)   *min_element(v.begin(),v.end())
    #define vll        vector<long long>
    #define vpll       vector<pair<ll,ll>>
    #define rep(i,v)    for(int i=0;i<v;i++)



const int MAXN = 2e5 +5;
using namespace std;
//-------------------------------------------------------------------------------------//

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

ll sum(vll v)
{
  ll s=0;
  for(auto x:v){s+=x;}
  return s;
}

ll bin(vll v,ll n)
{  ll en =v.size()-1;  ll st=0;
while(st<en)
{
  ll mid=st+(en-st)/2;
  if(v[mid]==n){return mid;}
  else if(v[mid]>n){en=mid;}
  else {st=mid+1;}
}
return -1;

}

bool isprime(ll n)
{
  if(n==0||n==1){return false;}
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0){return false;}
  }
  return true;


}
bool ispalin(string s)
{   int  n=s.size();
    if(n%2==0)
    {  int x=n/2;
       string a=s.substr(0,x);
       string b=s.substr(x,x);
       reverse(b.begin(),b.end());
       if(a==b) return true;
       else return false;
    }
    else
    {

        int x=(n-1)/2;
       string a=s.substr(0,x);
       string b=s.substr(x+1,x);
       reverse(b.begin(),b.end());
       if(a==b) return true;
       else return false;


    }

}
ll modexp(ll a, ll p, ll mod){
	if(p == 0) return 1;
	ll ans = modexp(a,p/2,mod);            
	ans = (ans*ans)%mod;
	if(p%2) return (a*ans)%mod;
	else return ans;
}
string revsub(string s,int st,int en)
{

       string k=s.substr(st,en-st+1);
       string a=s.substr(0,st);
       string b=s.substr(en+1,s.size()-en+1);
       reverse(k.begin(),k.end());
       if(st==0&&en==0){
          s=k;
       }
       else if(st==0){
        
          return k+b;
          
       }
       else if(en==s.size()-1){
         return a+k;
       }
       else
       {
         a+=k;
         return a+=b;
       }
  
}

//----------------------------------------------------------------------------------//
void solve()
{ 

  
   

}

int main(){
       charon
     int t; cin>>t;
     while (t--)
     {
        solve();
     }

      
   
    return 0;
}