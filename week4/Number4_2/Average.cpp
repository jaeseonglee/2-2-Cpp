/*	실습 4장의 2번 : Average.cpp
	작성일 : 2019.09.20
	작성자 : 20165153 이재성
	프로그램 설명 : 정수 공간 5개를 배열로 동적 할당받고, 정수를 5개 입력받아 평균을 구하고 출력한 뒤
					배열을 소멸시키도록 main()함수를 작성하라.
*/

#include <iostream>
using namespace std;

int main() {				// main 함수
	double average = 0;		// 평균을 저장할 실수형 변수 average 선언 및 0으로 초기화
	int *p = new int[5];	// 정수 공간 5개를 배열로 동적할당받는 p
	cout << "정수 5개 입력>> ";	// 정수5개를 입력하라고 출력
	cin >> p[0] >> p[1] >> p[2] >> p[3] >> p[4];	// 입력받은 5개의 숫자를 p의 인덱스에 순서대로 저장
	
	average = (double)(p[0] + p[1] + p[2] + p[3] + p[4]) / 5;	// 새로 저장된 p값들의 평균을 구해서
	cout << "평균 " << average << endl;		// 평균을 출력한다.

	delete [] p;				// 배열 메모리를 반환하기 때문에 [](대괄호)를 빼먹으면 안된다.
}