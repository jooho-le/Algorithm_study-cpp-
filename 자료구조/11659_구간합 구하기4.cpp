//���� ���� �ٽ� �̷�>
//
//�� �迭 S�� ����� ����
//	: S[i] = S[i - 1] + A[i]
//�������� ���ϴ� ���� (i���� j����)
//	: S[j] - S[i - 1]

N : ���� ����
M : ���� ���ؾ� �ϴ� Ƚ��
���ؾ� �ϴ� ���� : i, j
ex 1 2 3 4 5 ���� �־����� i = 1, j = 3�̸� 1 + 2 + 3 = 6

�����ٽ� : �������� ���� ���ϸ� �ð��ʰ��� 

����, ����, Ƚ�� �Է�
for (Ƚ����ŭ) {
	
}
�� ������� ��� 

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int suNo, quizoNo;
	cin >> suNo >> quizoNo;
	int S[100001] = {};

	for (int i = 1; i <= suNo; i++) {
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp; // �� �迭 S�� ����� ����
	}
	for (int i = 0; i < quizoNo; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << '\n'; // �������� ���ϴ� ����
	}
}