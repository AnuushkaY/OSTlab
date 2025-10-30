// utils/metrics.cpp
#include <iostream>
#include <vector>
#include <numeric>  // for accumulate
using namespace std;

// Calculate the average of given time durations in milliseconds
double calculateAverageTime(const vector<double>& times) {
    if (times.empty()) {
        cerr << "[Warning] No timing data available. Returning 0." << endl;
        return 0.0;
    }

    double sum = accumulate(times.begin(), times.end(), 0.0);
    double avg = sum / times.size();

#ifdef DEBUG
    cout << "[Debug] Average processing time: " << avg << " ms" << endl;
#endif

    return avg;
}

// Example test (you can remove this if integrated elsewhere)
#ifdef TEST_METRICS
int main() {
    vector<double> t = {15.2, 12.8, 14.6};
    cout << "Average: " << calculateAverageTime(t) << " ms" << endl;
    return 0;
}
#endif
