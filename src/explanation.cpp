#include <iostream>
using namespace std;

// 説明用クラス
class explanation {
public:
	static void help() {
		cout << "使用方法\n";
		cout << "O:ファイルを開く\n";
		cout << "C:ファイルを閉じる\n";
		cout << "H:Helpを表示します\n";
		cout << "Q:終了する\n";
	}
};