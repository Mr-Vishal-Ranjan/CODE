//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    vector<long long> findMissing(long long A[], long long B[], int N, int M)
    {
        // Your code goes here
        vector<long long> v ;
        long long b[99999];

        // for (int i = 0; i < N; i++)
        // {
        //     int count = 0;
        //     for (int j = 0; j < M; j++)
        //     {
        //         if (A[i] == B[j])
        //         {
        //             count++;
        //         }
        //     }

        //     if (count == 0)
        //     {
        //         v.push_back(A[i]);
        //     }
        // }

        for (int i = 0; i < M; i++)
        {
            int temp;
            temp = B[i];
            b[temp] = 1;
        }
        
        for (int i = 0; i < N; i++)
        {
            int temp;
            temp = A[i];
            if(b[temp] != 1)
            {
                v.push_back(temp);
            }
        }
        

        return v;
    }
};
//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        long long a[n];
        long long b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<long long> ans;

        Solution ob;
        ans = ob.findMissing(a, b, n, m);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << "\n";
    }
    return 0;
}
