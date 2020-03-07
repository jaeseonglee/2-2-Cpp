#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100) {
		p = new int[n];
		size = n;
	}
	~MyVector() { delete[] p; }
};

int main() {
	MyVector* v1, * v2;
	v1 = new MyVector(); // ����Ʈ�� ���� �迭 100 ���� �Ҵ�
	v2 = new MyVector(1024); // ���� �迭 1024 ���� �Ҵ�

	delete v1;
	delete v2;
}