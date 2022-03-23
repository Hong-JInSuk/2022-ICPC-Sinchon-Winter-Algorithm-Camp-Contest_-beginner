#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, b, c, d;
	cin >> n;

	bool flag[100001];
	deque<int> vb;

	for (int i = 0; i < n; i++) {
		//cin >> a; // 0 1 1 0
		cin >> flag[i];
	} 

	for (int i = 0; i < n; i++) {
		cin >> b; // 1 2 3 4
		if (flag[i] == 0) {
			vb.push_back(b);
		}
	}

	cin >> c; // 3
	for (int i = 0; i < c; i++) {
		cin >> d; // 2 4 7
		vb.push_front(d);
		cout << vb.back() << " "; // 4 1 2
		vb.pop_back();
	} 

	return 0;
}