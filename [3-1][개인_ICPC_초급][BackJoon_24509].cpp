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
		} //v[�л��ڵ�][����]
	}//2�����迭 �Է³�

	for (int i = 0; i < 4; i++) {
		int MAX = -1;
		for (int num = 1; num < st+1; num++) {
			if (v[num][i] > MAX) { 
				MAX = v[num][i];// �ִ�
				temp = num; //�л��ڵ�
			}
		}
		for (int j = 0; j < 4; j++) {
			v[temp][j] = -1; //�ѹ� �޾Ƹ������� ����.
		}
		cout << temp << " ";
	}

	return 0;
}