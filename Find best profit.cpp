
#include <iostream>
#include <set>
using namespace std;

int FindProfit(const set<int>& prices) {
    int maximum = 0;
    auto it = prices.begin();
    while (it != prev(prices.end())) {
        auto next_it = next(it);
        int store = *next_it - *it;
        if (maximum < store) {
            maximum = store;
        }
        it++;
    }
    if (maximum < 0) {
        maximum = 0;
    }
    return maximum;
}

int main() {
    set<int> prices1 = {7,1,5,3,6,4};
    set<int> prices2 = {7, 3, 2, 5, 10, 1};

    cout << FindProfit(prices1) << endl;
    cout << FindProfit(prices2) << endl;

    return 0;
}
