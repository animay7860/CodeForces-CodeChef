#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long int
#define ld long double
#define print(result) cout<<result<<endl
#define fo(i,n) for(int i=0;i<(n);++i)
#define repA(i,j,n) for(int i=(j);i<=(n);++i)
#define repD(i,j,n) for(int i=(j);i>=(n);--i)
#define pb push_back
#define mp make_pair
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	while (t--) {
		ll x, y;
		cin >> x >> y;
		int temp;
		ll count = 0;
	    if (x == y) {
			print(x);
		}
		else if (x == 0 or y == 0) {
			print(-1);
		}
	
		// else if(x<y){
		// if(y>x){
		// swap(y,x);
		else{
		if (x > y) 
			swap(x, y);
         
        //  temp =x;
        //  x=y;
        //  y=temp;
			while (x <= y) {
			    count++;
				x = x * 2;
			}
			x = x / 2;
			count--;
			
			if (y== x) {
				print(y + count);
			}
			else {
				print(y + count + 1);
			}
			count=0;
		}
		// else if(x<y){
// 		else if (x < y) {
// 			while (x <= y) {
// 				x = x * 2;
// 				count++;
// 			}
// 			count--;
// 			x = x / 2;
// 			if (x == y) {
// 				print(y + count);
// 			}
// 			else {
// 				print(y + count + 1);
// 			}
// 		}

		// else if(y<x){
		//     swap(x,y);
		// while(x*2<=y){
		//     count++;
		// }
		// count--;
		// }


		// if(x==y){
		//     print(y+count);
		// }
		// else{
		//     print(y+count+1);
		// }

		// ll diff=abs(x-y);
		// ll count=0;
		// ll cnt=0;
		// if(diff>x or diff>y ){
		//     cout<<-1<<endl;
		// }
		// else if(diff==0){
		//    // while(x!=0 and y!=0){
		//    //         x=x-1;
		//    //         y=y-1;
		//    //         cnt++;
		//    // }
		//     print(x);
		// }
		// else{
		//     if(y>x){
		//         x=diff;
		//         y=diff*2;
		//         x=2*x;
		//         count++;
		//         while(x!=0 and y!=0){
		//             x=x-1;
		//             y=y-1;
		//             count++;
		//             }
		//             print(count);
		//     }
		//     else{
		//         y=diff;
		//         x=2*diff;
		//          y=2*y;
		//         count++;
		//         while(x!=0 and y!=0){
		//             x=x-1;
		//             y=y-1;
		//             count++;
		//             }
		//             print(count);
		//     }

		// }
	}
	return 0;
}
