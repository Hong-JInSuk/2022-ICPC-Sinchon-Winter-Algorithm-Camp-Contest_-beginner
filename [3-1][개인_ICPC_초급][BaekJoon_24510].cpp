#include<iostream>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)

using namespace std;

int main() {

	int c;
	cin >> c;

	string str;
	vector<string> vstr;
	vector<int> arr;

	for (int i = 0; i < c; i++) {
		cin >> str;
		vstr.push_back(str); // 문장입력
	}

	for (int i = 0; i < c; i++) {
		int cnt = 0;
		/*while (vstr[i].find("while", n) < 10000 || vstr[i].find("for", n) < 10000) {
			if (vstr[i].find("for", n) < 101) {
				cnt++;
				n = vstr[i].find("for", n) + 3;
			}
			if (vstr[i].find("while", n) < 101) {
				cnt++;
				n = vstr[i].find("while", n) + 5;
			}
		}*/
		//아래말고 위처럼하면 시간초과
		int n = 0;
		while (vstr[i].find("for",n) < 10000) {
			if (vstr[i].find("for", n) < 10000) {
				cnt++;
				n = vstr[i].find("for", n) + 3; // 찾으면 cnt++ 하고, 다음위치부터 찾게함.
			}
		}
		n = 0;
		while (vstr[i].find("while",n) < 10000) {
			if (vstr[i].find("while", n) < 10000) {
				cnt++;
				n = vstr[i].find("while", n) + 5;
			}
		}
		arr.push_back(cnt);
	}

	int MAX = *max_element(arr.begin(), arr.end());
	cout << MAX;

	return 0;
}
