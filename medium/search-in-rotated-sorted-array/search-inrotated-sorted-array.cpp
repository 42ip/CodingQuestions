class Solution {
public:
    int search(vector<int>& arr, int K) {
        int n = arr.size();
        int l = 0, h = n - 1, ans;

        while(l <= h) {
            int mid = l + (h - l)/2;
            if(arr[mid] == K) return mid;

            // either right or left part will be sorted
            if(arr[mid] > arr[l] || mid == l) { // left part is sorted
                if(arr[l] <= K && K < arr[mid]) h = mid - 1;
                else l = mid + 1;
            } else { // right part is sorted
                if(arr[mid] < K && K <= arr[h]) l = mid + 1;
                else h = mid - 1;
            }
        }

        return -1;
    }
};
