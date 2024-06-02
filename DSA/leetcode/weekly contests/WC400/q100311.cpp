// 100311. Count Days Without Meetings

// You are given a positive integer days representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array meetings of size n where, meetings[i] = [start_i, end_i] represents the starting and ending days of meeting i (inclusive).

// Return the count of days when the employee is available for work but no meetings are scheduled.

// Note: The meetings may overlap.

 

// Example 1:

// Input: days = 10, meetings = [[5,7],[1,3],[9,10]]

// Output: 2

// Explanation:

// There is no meeting scheduled on the 4th and 8th days.

// Example 2:

// Input: days = 5, meetings = [[2,4],[1,3]]

// Output: 1

// Explanation:

// There is no meeting scheduled on the 5th day.

// Example 3:

// Input: days = 6, meetings = [[1,6]]

// Output: 0

// Explanation:

// Meetings are scheduled for all working days.

 

// Constraints:

// 1 <= days <= 109
// 1 <= meetings.length <= 105
// meetings[i].length == 2
// 1 <= meetings[i][0] <= meetings[i][1] <= days


class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        vector<bool> meetday(days+1, false);

        for(int i=0; i<meetings.size();i++){
            const auto& meet = meetings[i];
            for(int j=meet[0]; j<=meet[1];j++){
                meetday[j]=true;
            }
        }

        int availdays=0;
        for(int i=1; i<=days; i++){
            if(!meetday[i]){
                availdays+=1;
            }
        }

        return availdays;
    }
};

//time limit exceeded


//now this works: 
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end()); // Sort meetings by start day

        int availableDays = 0;
        int lastEnd = 0; // End of the last meeting
        for (const auto& meet : meetings) {
            int start = meet[0], end = meet[1];
            availableDays += max(0, start - lastEnd - 1); // Calculate gap between meetings
            lastEnd = max(lastEnd, end); // Update end of last meeting
        }
        // Count remaining days after the last meeting
        availableDays += max(0, days - lastEnd);

        return availableDays;
    }
};