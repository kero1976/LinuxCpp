#include <iostream>
#include "explanation.cpp"
#include <string>
using namespace std;

void fileOpen(string filePath) {
	cout << filePath;
	printf("�t�@�C�����J���܂�\n");
}

int main() {

	explanation::help();
	// �W�����͂���J���t�@�C�������w��
	string str;
	string filePath;
	while (true) {
		cin >> str;
		cout << str << "�����͂���܂���\n";
		if (str == "Q") {
			printf("�I�����܂�");
			break;
		}
		if (str == "O") {
			printf("�J���t�@�C������͂��Ă��������B");
			cin >> filePath;
			fileOpen(filePath);
		}
		if (str == "H") {
			explanation::help();
		}
	}

	return 0;
}
