//n�� �ޱ�
//���ڸ� string����(number)�� �Է¹ޱ�
//sum ���� ����
//for (number���̸�ŭ) {
//	sum�� �迭�� �� �ڸ��ǰ��� ����ȭ�ؼ� ����
//}
//sum ���

#include <iostream>

using namespace std;

int main_11720() {
	int N = 0;
	string number;
	cin >> N;
	cin >> number;
	int sum = 0;

	for (int i = 0; i < number.length(); i++) {
		sum += number[i] - '0'; // �ƽ�Ű�ڵ��ε� 0�� �ƽ�Ű�ڵ�� 48�� �� -'0'�ϸ� ����ȭ��
	}
	cout << sum << endl;
}