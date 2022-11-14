#include "Title.hpp"

void Title::debug() const {
	Print << U"Title";
	Print << U"Press I to change scene";
}

Title::Title(const InitData& init) : IScene(init) {
	Scene::SetBackground(Palette::White);
	debug();
}

Title::~Title() {
	ClearPrint();
}

void Title::update() {
	if (KeyI.down()) {
		changeScene(0);
	}
}

void Title::draw() const {
}
