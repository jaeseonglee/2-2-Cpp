/*	C++ ���α׷��� 5���� ����
	�ǽ� 4�� : Sample.h , Sample.cpp , main.cpp
	�ۼ��� : 2019.09.26 ~ 09.27
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �ǽ������� �־��� Sample Ŭ������ �Բ� main�Լ��� ����ǵ����� ���α׷�
					Ű����κ��� �������� �Է¹޾� ���� ū ���� ����ϴ� ���α׷�
*/

class Sample {		// Sample Ŭ���� ����� ������ �־��� Ŭ������ �����ϴ�
	int* p;			// ������ ������ p ����
	int size;		// ������ ���� size 
public:
	Sample(int n);	// ������
	void read();	// ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է¹���
	void write();	// ���� �迭�� ȭ�鿡 ���
	int big();		// ���� �迭���� ���� ū�� ����
	~Sample();		// �Ҹ���
};