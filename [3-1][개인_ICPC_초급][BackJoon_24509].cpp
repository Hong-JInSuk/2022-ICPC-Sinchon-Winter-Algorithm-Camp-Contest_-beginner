#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int st, score, number;
	int temp = 0;
	cin >> st;
	
	vector<vector<int>> v(st+1,vector<int>(4));

	for (int i = 0; i < st; i++) {
		cin >> number;
		for (int j = 0; j < 4; j++) {
			cin >> score;
			v[number][j] = score;
		} //v[학생코드][과목]
	}//2차원배열 입력끝

	for (int i = 0; i < 4; i++) {
		int MAX = -1;
		for (int num = 1; num < st+1; num++) {
			if (v[num][i] > MAX) { 
				MAX = v[num][i];// 최댓값
				temp = num; //학생코드
			}
		}
		for (int j = 0; j < 4; j++) {
			v[temp][j] = -1; //한번 받아먹은놈은 제외.
		}
		cout << temp << " ";
	}

	return 0;
}