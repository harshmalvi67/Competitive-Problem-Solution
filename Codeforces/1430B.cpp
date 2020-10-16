
//https://codeforces.com/problemset/problem/1430/B

//This is problem uses concept of sorting and greedy approach.

#include<iostream>
#include<algorithm>

using namespace std;

void maxDiff(int n, int k, int ar[])
{
    long long ans=0;
    for (int i = 0; i <= k; i++) {
		ans += ar[n-i-1];
	}
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar, ar+n);
        maxDiff(n, k, ar);
    }
    return 0;
}