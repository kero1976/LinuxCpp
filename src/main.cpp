#include <iostream>
#include "explanation.cpp"
#include <string>
using namespace std;

void fileOpen(string filePath) {
	cout << filePath;
	printf("ファイルを開きます\n");
}

int main() {

	explanation::help();
	// 標準入力から開くファイル名を指定
	string str;
	string filePath;
	while (true) {
		cin >> str;
		cout << str << "が入力されました\n";
		if (str == "Q") {
			printf("終了します");
			break;
		}
		if (str == "O") {
			printf("開くファイルを入力してください。");
			cin >> filePath;
			fileOpen(filePath);
		}
		if (str == "H") {
			explanation::help();
		}
	}

	return 0;
}
