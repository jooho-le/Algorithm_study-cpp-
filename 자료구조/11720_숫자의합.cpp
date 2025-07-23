//n값 받기
//숫자를 string변수(number)로 입력받기
//sum 변수 선언
//for (number길이만큼) {
//	sum에 배열의 각 자리의값을 정수화해서 더함
//}
//sum 출력

#include <iostream>

using namespace std;

int main_11720() {
	int N = 0;
	string number;
	cin >> N;
	cin >> number;
	int sum = 0;

	for (int i = 0; i < number.length(); i++) {
		sum += number[i] - '0'; // 아스키코드인데 0은 아스키코드로 48임 즉 -'0'하면 정수화됨
	}
	cout << sum << endl;
}