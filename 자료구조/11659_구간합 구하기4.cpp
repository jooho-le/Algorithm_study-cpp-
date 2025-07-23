//구간 합의 핵심 이론>
//
//합 배열 S를 만드는 공식
//	: S[i] = S[i - 1] + A[i]
//구간합을 구하는 공식 (i에서 j까지)
//	: S[j] - S[i - 1]

N : 수의 개수
M : 합을 구해야 하는 횟수
구해야 하는 구간 : i, j
ex 1 2 3 4 5 숫자 주어지고 i = 1, j = 3이면 1 + 2 + 3 = 6

문제핵심 : 구간마다 합을 구하면 시간초과됨 

개수, 숫자, 횟수 입력
for (횟수만큼) {
	
}
합 순서대로 출력 

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
		S[i] = S[i - 1] + temp; // 합 배열 S를 만드는 공식
	}
	for (int i = 0; i < quizoNo; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << '\n'; // 구간합을 구하는 공식
	}
}