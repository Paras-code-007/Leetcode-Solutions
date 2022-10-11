//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int a[], int n , int x )
{
    vector<int> ans;
    int st= 0; 
    int end= n-1;
    
    // for first occurence
    int t=-1;
    while(st<=end){
        int mid= (st+end)/2;
        if(a[mid]==x){
            t= mid;
            end= mid-1;
        }else if(x<a[mid]){
            end= mid-1;
        }else{
            st= mid+1;
        }
    }
    ans.push_back(t);
    
    // for last occurence
    t=-1;
    st= 0; 
    end= n-1;
    while(st<=end){
        int mid= (st+end)/2;
        if(a[mid]==x){
            t= mid;
            st= mid+1;
        }else if(x<a[mid]){
            end= mid-1;
        }else{
            st= mid+1;
        }
    }
    ans.push_back(t);
    
    
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends