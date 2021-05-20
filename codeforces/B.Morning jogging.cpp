#include<bits/stdc++.h>
using namespace std;



int main(){
	
 
	int T; cin >> T;
	while (T--) {
		int N, M; cin >> N >> M;
		vector<vector<int> > B(N, vector<int>(M));
		vector<pair<int, int> > A; A.reserve(N*M);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> B[i][j];
				A.push_back({B[i][j], i});
			}
		}
 
		//std::nth_element(A.begin(), A.begin()+M, A.end());
		std::sort(A.begin(), A.end());
		vector<int> cnt(N);
		for (int z = 0; z < M; z++) {
			int i = A[z].second;
			cnt[i]++;
		}
		int tot_cnt = 0;
		for (int i = 0; i < N; i++) {
			//std::nth_element(B[i].begin(), B[i].begin()+cnt[i], B[i].end());
			std::sort(B[i].begin(), B[i].end());
			std::rotate(B[i].begin(), B[i].end() - tot_cnt, B[i].end());
			tot_cnt += cnt[i];
			cerr << tot_cnt << '\n';
			for (int j = 0; j < M; j++) {
				cout << B[i][j] << " \n"[j+1==M];
			}
		}
	}
 
	return 0;
}

