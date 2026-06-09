// ConsoleApplication.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <assert.h>



int main() {
	auto a = std::make_shared<int>();
	auto b = a;
	auto c = std::move(a);

	std::cout << a.use_count() << std::endl;
	std::cout << b.use_count() << std::endl;
	std::cout << c.use_count() << std::endl;
}
















//class Weapon {
//public:
//	void Use() {}
//
//
//
//};
//
//class Player {
//	std::shared_ptr<Weapon> weapon;
//public:
//	Player(std::shared_ptr<Weapon> weapon1) : weapon(weapon1) {
//		std::cout << weapon.use_count() << std::endl;
//		std::cout << weapon1.use_count() << std::endl;
//	}
//
//	void Attack() {
//		if (weapon) weapon->Use();
//	}
//
//};
//
//int main() {
//	auto wp = std::make_shared<Weapon>();
//	//コピー（参照カウント＋１）
//	Player p(wp);
//	//ムーブ（所有権を移動）
//	Player q(std::move(wp));
//	return 0;
//}




















//class Test {
//public:
//	void Show() {
//		std::cout << "Hello World!!" << std::endl;
//	}
//};
//
//void Func(Test* test) {
//	assert(test != nullptr);
//	test->Show();
//}
//
//int main()
//{
//	Func(new Test());
//	Func(nullptr);
//	
//	/*if (p != nullptr) {
//		delete p;
//	}*/
//}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
