/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(), [](Interval &a, Interval &b){
            return a.start<b.start;
        });
        if(intervals.size()==0)return true;
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i+1].start<intervals[i].end)return false;
        }
        return true;
    }
};
