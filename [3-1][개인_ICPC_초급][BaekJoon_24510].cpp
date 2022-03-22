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
		vstr.push_back(str);
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
		int n = 0;
		while (vstr[i].find("for",n) < 10000) {
			if (vstr[i].find("for", n) < 10000) {
				cnt++;
				n = vstr[i].find("for", n) + 3;
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