class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        // Initialize an answer array with n elements, all set to 0
        vector<int> answer(n, 0);
        
        // Apply the difference array concept
        for (auto& booking : bookings) {
            int first = booking[0] - 1; // Convert to 0-based index
            int last = booking[1] - 1;  // Convert to 0-based index
            int seats = booking[2];
            
            answer[first] += seats;  // Add seats to the start of the range
            if (last + 1 < n) {
                answer[last + 1] -= seats;  // Subtract seats just after the end of the range
            }
        }
        
        // Perform the prefix sum to get the actual number of seats booked for each flight
        for (int i = 1; i < n; ++i) {
            answer[i] += answer[i - 1];
        }
        
        return answer;
    }
};
