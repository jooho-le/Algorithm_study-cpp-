//점수의 최댓값 = M
//모든 점수 -> 점수/M*100
//
//// 내풀이
//과목의 개수 N 입력
//a : 과목 데이터 저장 
//for (배열만큼) {
//	점수 데이터 저장
//}
//for (배열만큼) {
//	최고점수 저장 및 나머지 수정
//	총점 sum 계산
//}
//sum / 과목수 출력
// 
//// 책풀이
//과목의 개수 N 입력
//a : 과목 데이터 저장
//for (배열만큼) {
//	점수 데이터 저장
//}
//for (배열만큼) {
//	최고점 판별하여 저장
//	총점 계산
//}
//sum *100 / 최고점 / 과목수 출력
//// 한 과목과 관련된 수식을 모두 더한 후 관련된 수식으로 변환해 로직이 간단해짐 

#include <iostream>

using namespace std;	

int main_1546() {
	int N = 0;
	int a[1000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	long sum = 0;
	long max = 0;
	for (int i = 0; i < N; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		sum = sum + a[i];
	}
	double result = (double)sum * 100 / max / N;
	cout << result << endl;
}