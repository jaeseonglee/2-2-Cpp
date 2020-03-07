/*	�ǽ� 12�� : Dept.cpp
	�ۼ��� : 2019.10.20 ~ 10.21
	�ۼ��� : 20165153 ���缺
	���α׷� ����: �а��� ��Ÿ���� DeptŬ������ �̸� Ȱ���ϴ� ���α׷�.
			�ǽ����� 1. �־��� �������� �������� DeptŬ������ ������� ��� �����ϰ�, ��ü ���α׷��� �ϼ��϶�.
					2. DeptŬ������ ���� �����ڰ� �ۼ��Ǿ� ���� ���� ��� �������� ������ ���α׷� ���� ���� ���� �ð� ������
					�߻��Ѵ�. �ڵ� ��� �κ��� ����ɶ� ���� �����ڰ� ȣ��Ǵ��� �����ϰ�, ���� �����ڰ� ������ �� ���� ������
					�߻��ϴ��� �����϶�. - �ڵ� �ǾƷ� �ּ��� ����
					3. DeptŬ������ ���� �����ڸ� �����϶�. ���� �����ڰ� ���� ��Ȳ������ ���� ������ �߻����� �ʰ��Ϸ��� ���
					�κ��� �����ϸ� �ɱ�? ���� �Ϻκ��� �������� �ذ�ȴ�. �ڵ带 �����غ���.
*/

#include <iostream>
using namespace std;

class Dept {
	int size; // scores �迭�� ũ��
	int* scores;	// ���� �Ҵ� ���� ���� �迭�� �ּ�
public:
	Dept(int size) {		// ������
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept);	// ���� ������
	~Dept();		// �Ҹ���
	int getSize() { return size; }
	void read();		// size��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	bool isOver60(int index);	// index�� �л��� ������ 60���� ũ�� true ����
};

/*
Dept::Dept(const Dept& dept) { // 1�� ���� ������ ����
	size = dept.size;		// size�� dept�� size�� ����
	scores = new int[size];	// size��ŭ�� ũ��� scores�� ���� �Ҵ�
	for (int i = 0; i < size; i++) {	// �ݺ����� ���� �迭�� �� ���� ����
		scores[i] = dept.scores[i];
	}
}
*/

Dept::~Dept() {	// 1�� �Ҹ��� ����
	if (scores) // �Ҵ޹��� �޸𸮰� ������
		delete[] scores;		// ��ȯ���ش�
}

void Dept::read() {		// 1�� read�Լ� ����
	cout << size << "�� ���� �Է�>> ";	// size��ŭ �Է¹޴´�.
	for (int i = 0; i < size; i++) {	// �ݺ����� ����
		cin >> scores[i];		// scores�� ���� �����Ѵ�
	}
}

bool Dept::isOver60(int index) {	// 1�� isOver60 �Լ� ����
	if (scores[index] >= 60) return true;	// 60 �̻��� 60�����ε�, å������ 60 �ʰ��� ����� ����ϰ� �ִ�.
	else return false;				// �ƹ�ư 60�̻��̸� true, �ƴϸ� false ��ȯ
}

//////////////////
// 3�� ���� ������ ��ü�� �ּ�ó�������ν� ���� ������ ����
// countPass�� ���� ���� �����ڸ� ���� ��ü�� ȣ���ϱ� ������ �����ڸ� ���� main�Լ��� ��ü�� ����Ű���� ����
int countPass(Dept& dept) {		// dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10); // �� 10���� �ִ� �а� com
	com.read();	  // �� 10���� �л����� ������ Ű����κ��� �о� scores �迭�� ����
	int n = countPass(com);	// com�а��� 60���̻����� ����� �л��� ���� ����
	cout << "60���̻��� " << n << "��";
}


/* 2�� :	������ ���� ���� �߿��� ���� ���� ȣ��� ��ü�� ���޵ɶ��� ���� �����ڰ� ȣ��Ǵµ�
	67�ٿ� int n = countPass(com); ���⼭ countPass �Լ��� com��ü�� �����ϴµ� �Լ��� �Ű����� ��ü�� �����ɶ�
	���� �����ڰ� �ڵ����� ȣ��Ǳ� ������ 2�������� ���α׷������� ��������ڰ� �ʿ��ϴ�.
*/