/*Stock buy(at minimum price) and sell(at maximum price)

We are given an array :
arr=[100,180,260,310,40,535,695]

output is simple to print buy & sell price so that we can have maximum profit*/

#include <bits/stdc++.h>
using namespace std;

void stock(int price[], int n)
{

    if (n == 1)
        return;
    int i = 0;
    while (i < n - 1) {
        while ((i < n - 1) && (price[i + 1] <= price[i]))
            i++;

        if (i == n - 1)
            break;
        int buy = i++;
        while ((i < n) && (price[i] >= price[i - 1]))
            i++;
        int sell = i - 1;
        cout << "Buy on day: " << buy
             << "\t Sell on day: " << sell << endl;
    }
}
 
int main()
{
    int price[] = { 100, 180, 260, 310, 40, 535, 695 };
    int n = sizeof(price) / sizeof(price[0]);
    stock(price, n);
    return 0;
}