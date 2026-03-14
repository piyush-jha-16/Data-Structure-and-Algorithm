#include<bits/stdc++.h>
using namespace std;
int bemstTimeToBuyAndSellStock(vector<int> &prices){
    int profit = 0;
    int minPrice = prices[0];
    for(int i=1;i<prices.size();i++){
        int currentProfit = prices[i]-minPrice;
        profit = max(currentProfit,profit);
        minPrice = min(minPrice,prices[i]);
    }
    return profit;
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout<<"Maximum profit: "<<bestTimeToBuyAndSellStock(prices)<<endl;
    return 0;
}