class Solution {
public:
    string minWindow(string s, string t) {
        // ARRAY as a Freq map
	int FP[256] = {0};
	// Window
	int FS[256] = {0};



	for (int i = 0; i < t.length(); i++) {
		FP[t[i]]++;
	}
	// Sliding Window Algorithm
	int count = 0;
	int start = 0; // Left contraction
	int start_idx = -1;
	int min_so_far = INT_MAX;
	int window_size;


	for (int i = 0; i < s.length(); i++) {
		// -----------------------1. EXPANSION-----------------------------
		char ch = s[i];
		// expand the window including the current character
		FS[ch]++;

		// COUNT how many characters have been matched till now
		if (FP[ch] != 0 and FS[ch] <= FP[ch]) {
			count = count + 1;
		}

		// -----------------------2. CONTRACTION---------------------------

		// IF all characters of the pattern are found in the current window
		// THEN start contracting
		if (count == t.length()) {
			// Start contracting from the left to remove unwanted character
			// NOT PRESENT OR FREQ IS HIGHER
			while (FP[s[start]] == 0 or FS[s[start]] > FP[s[start]]) {
				FS[s[start]]--;
				start++;
			}

			// Note the window size
			window_size = i - start + 1;

			if (window_size < min_so_far) {
				min_so_far = window_size;
				start_idx = start;
			}
		}
	}
	if (start_idx == -1) {
		return "";
	}
	return s.substr(start_idx, min_so_far);
        
    }
};