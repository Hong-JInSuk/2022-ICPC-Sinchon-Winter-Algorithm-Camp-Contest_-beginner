#include<iostream>
#include<deque>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
        // 위 3줄은 cout과 cin의 속도를 높여주는 코드이다. 이 코드를 쓰지 않으면, cin을 scanf로 대체해야 시간초과가 발생하지 않는다.
	
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
