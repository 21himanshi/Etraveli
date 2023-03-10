
#include <iostream>
#include <vector>

using namespace std;

struct Segment {
    int buy;
    int sell;
};

vector<Segment> findMaximumProfitSegments(int prices[], int n) {
    vector<Segment> segments;
    int i = 0;

    while (i < n - 1) {
        //to find minimum
        while (i < n - 1 && prices[i + 1] <= prices[i]) {
            i++;
        }

        if (i == n - 1) {
            break;
        }

        Segment segment;
        segment.buy = i++;

        // to find maximum
        while (i < n && prices[i] >= prices[i - 1]) {
            i++;
        }

        segment.sell = i - 1;
        segments.push_back(segment);
    }

    return segments;
}

int main() {
    //int prices[] = { 100, 180, 260, 310, 40, 535, 695 };
    int prices[10];
    int count=0;
    cout<<"\nEnter the no. of stock prices you want to enter: ";
    cin>>count;
    for(int i=0;i<count;i++)
    {
        cin>>prices[i];
    }
    int n = sizeof(prices) / sizeof(prices[0]);

    vector<Segment> segments = findMaximumProfitSegments(prices, n);

    if (segments.empty()) {
        cout << "No Profit" << endl;
    } else {
        for (auto segment : segments) {
            cout << "Buy on day " << segment.buy << " and sell on day " << segment.sell << endl;
        }
    }

    return 0;
}