//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int a[], int n, int x) {
	   // int ans=0;
	    
	   // int ct1=0;
	   // int st=0;
	   // int end= n-1;
	   // while(st<=end){
	   //     int mid= st+ (end-st)/2;
	   //     if(a[mid]==x){
	   //         ct1++;
	   //         end= mid-1;
	   //     }else if(x<a[mid]){
	   //         end= mid-1;
	   //     }else{
	   //         st= mid+1;
	   //     }
	   // }
	   //// cout<<ct1<<endl;
	    
	   // int ct2=0;
	   // st=0;
	   // end= n-1;
	   // while(st<=end){
	   //     int mid= st+ (end-st)/2;
	   //     if(a[mid]==x){
	   //         ct2++;
	   //         st= mid+1;
	   //     }else if(x<a[mid]){
	   //         end= mid-1;
	   //     }else{
	   //         st= mid+1;
	   //     }
	   // }
	   //// cout<<ct1<<endl;
	   // ans= ct1+ct2;
	    
    //     if(ans%2=0){
    //         ans--;
    //     }
	   // return ans;
	   
	   //first occurence
	   
	   int ans=0;
	   int fa=-1;
	   int st=0;
	   int end=n-1;
	   
	   while(st<=end){
	       int mid= st+ (end -st)/2;
	       if(a[mid]==x){
	           fa= mid;
	           end= mid-1;
	       }else if(x<a[mid]){
	           end= mid-1;
	       }else{
	           st= mid+1;
	       }
	   }
	   
	   int la=-1;
	   st=0;
	   end=n-1;
	   
	   while(st<=end){
	       int mid= st+ (end -st)/2;
	       if(a[mid]==x){
	           la= mid;
	           st= mid+1;
	       }else if(x<a[mid]){
	           end= mid-1;
	       }else{
	           st= mid+1;
	       }
	   }
	   
	   if(fa==-1 || la==-1){
	       return ans;
	   }
	   ans= la-fa+1;
	   
	   return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends