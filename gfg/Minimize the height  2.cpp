class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
sort(arr, arr + n);
	int minimumElement, maximumElement;
	int ans = arr[n - 1] - arr[0];
	int smallest = arr[0] + k;
	int greatest = arr[n - 1] - k;

	for (int i = 0; i <n - 1; i++) {

		minimumElement = min(smallest, arr[i + 1] - k);
		maximumElement = max(greatest, arr[i] + k);

		if (minimumElement < 0) continue;

		ans = min(ans, maximumElement - minimumElement);
	}
    
        return ans;
    }
};