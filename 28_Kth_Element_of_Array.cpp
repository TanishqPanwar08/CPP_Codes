#include<bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k);

int main()
{
    
}

int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(arr1[i++]);
    }
    while(j<m){
        ans.push_back(arr2[j++]);
    }

    return ans[k-1];
}