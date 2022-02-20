class Solution {
    public int removeCoveredIntervals(int[][] intervals) {
        int n = intervals.length;
        Arrays.sort(intervals, (a, b) -> (a[0] == b[0] ? b[1] - a[1] : a[0] - b[0]));
        int end = 0, ans = 0;
        for(int i = 0;i < n;i++) {
            if(end < intervals[i][1]) {
                end = intervals[i][1];
                ans++;
            }
        }
        return ans;
    }
}
