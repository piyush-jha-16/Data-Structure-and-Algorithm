#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &arr){
    int n = arr.size();
    int prefix = 1;
    int suffix = 1;
    int maxProduct = INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix==0) prefix = 1;
        if(suffix==0) suffix = 1;
        prefix = prefix*arr[i];
        suffix = suffix*arr[n-1-i]; 
        maxProduct = max(maxProduct,max(prefix,suffix));
    }
    return maxProduct;
}
int main(){
    vector<int> arr = {6,-3,-10,0,2};
    cout<<"Maximum product of subarray: "<<maxProduct(arr)<<endl;
    return 0;
}