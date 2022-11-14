#include "Title.hpp"

void Title::debug() const {
	Print << U"Title";
}

Title::Title(const InitData& init) : IScene(init) {
	Scene::SetBackground(Palette::White);
	debug();
}

void Title::update() {
}

void Title::draw() const {
}
