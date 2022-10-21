#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate the maximum
// Manhattan distance
void MaxDist(vector<pair<int, int> >& A, int N)
{
    // Stores the maximum distance
    int maximum = INT_MIN;
 
    for (int i = 0; i < N; i++) {
 
        int sum = 0;
 
        for (int j = i + 1; j < N; j++) {
 
            // Find Manhattan distance
            // using the formula
            // |x1 - x2| + |y1 - y2|
            sum = abs(A[i].first - A[j].first)
                  + abs(A[i].second - A[j].second);
 
            // Updating the maximum
            maximum = max(maximum, sum);
        }
    }
 
    cout << maximum;
}
 
// Driver Code
int main()
{
    int N = 3;
 
    // Given Co-ordinates
    vector<pair<int, int> > A
        = { { 1, 2 }, { 2, 3 }, { 3, 4 } };
 
    // Function Call
    MaxDist(A, N);
 
    return 0;
}
