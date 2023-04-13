#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define float double
#define print1(p) cout<<p<<"\n";
#define print2(p,q) cout<<p<<" "<<q<<"\n";
#define print3(p,q,r) cout<<p<<" "<<q<<" "<<r<<"\n";
#define arrin(a,n) for(long long i=0;i<n;i++)cin>>a[i];

//fundamentals
#define pb push_back
#define pf push_front
#define lb(v,val)  (lower_bound(v.begin(),v.end(),val)-v.begin())
#define ub(v,val)  (upper_bound(v.begin(),v.end(),val)-v.begin())
#define line cout<<"\n";
#define sortv(v) sort(v.begin(),v.end())
#define sortvd(v) sort(v.begin(),v.end(),greater<int>())
#define lcm(a,b) (a*b/gcd(a,b))

//loops
#define f(i,a,b) for(int i=(int)a;i<(int)b;i++)
#define rf(i,a,b) for(int i=(int)a;i>=(int)b;i--)
#define f0 for(int i=0;i<n;i++)
#define f1 for(int i=1;i<=n;i++)
#define fr for(int i=n-1;i>=0;i--)

//some values
#define PI 3.14159265
const int MOD=1000000000+7;
const int MOD1 = 998244353;
const int Val9=1000000000;
const int Val6=1000000;

//maximum and minimum
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define min4(a,b,c,d) min(a,min3(b,c,d))
#define endl "\n"
 
 
 int pwr(int x, int y){
 int r=1;
 while(y>0){
  if(y%2)
   r=r*x;
  x*=x;
  y/=2;
 }
 return r;
}
 

vector<int>vprime;
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
    {  if (prime[p])
       {vprime.push_back(p);}
    }
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
 int nCr(int n, int r) 
{ 
    int ans=1;
    f(i,0,r)
    {
        ans*=n-i;
        ans/=i+1;
    }
    return ans;
}

int fun(int p,int p1,int q1,int q,int n, int k){
     int ans=0;
     
    vector<vector<int>> b(k,vector<int>(2));
    int a2=0;

    f(i,0,k){
      cin>>b[i][0]>>b[i][1];
    }
    f(i,0,k){
    
        ans=((ans%MOD+(((b[i][0]*b[i][0])%MOD)*n)%MOD)%MOD+ q)%MOD;
        ans= ((ans%MOD+(((b[i][1]*b[i][1])%MOD)*n)%MOD)%MOD+ p)%MOD;
        int lu=2*q1;
        a2=(lu*b[i][0])%MOD;
        ans= (ans -a2 +MOD)%MOD;
        ans=(ans+MOD)%MOD;
        int cu= 2*p1;
        a2= (b[i][1]*(cu))%MOD;
        ans=(ans%MOD-a2+MOD)%MOD;
        
    }  
    cout<<ans<<endl;
}


int uchiha(){
    
   int n,k;
    cin>>n;
    int x=0;
    int x1=0;
    
     vector<vector<int>> a(n,vector<int>(2));
     int y=0;
    int y1=0;
    
    f(i,0,n){
        cin>>a[i][0]>>a[i][1];
    }
    cin>>k;
    y=0;
    y1=0;
    x=0;
    x1=0;
    f(i,0,n){
       
        x+=(a[i][0]*a[i][0])%MOD;
         x=x%MOD;
        x1+=a[i][0]%MOD;
         x1=x1%MOD;
         
    }
    f(i,0,n){
       y=(y%MOD+(a[i][1]*a[i][1])%MOD)%MOD;
    
        y1+=(a[i][1])%MOD;
         y1=y1%MOD;
    }

    
     int p=y%MOD;
     int p1=y1%MOD;
     int q1=x1%MOD;
     int q=x%MOD;   


    fun(p,p1,q1,q,n,k);
    return 0;
    
    
   
    
}



int32_t main() {
    // your code goes {here}
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case #"<<i<<": ";
        uchiha();
    }
    return 0;
}