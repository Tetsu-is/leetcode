#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int largest = 0;
    int start = 0;
    int diff = 0;
    for(int i = 1; i<pricesSize; i++){
        if(prices[i] < prices[start]) {
            start = i;
        }
        else{
            diff = prices[i] - prices[start];
            if(diff>largest) {
                largest = diff;
            }
        }
    }
    return largest;
}

int main() {
    int prices[6] = {7,1,5,3,6,4};
    int res = maxProfit(prices, 6);
    printf("%d\n",res);
    return 0;
}