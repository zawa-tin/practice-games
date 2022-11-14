#include "BinarySearch.hpp"

void BinarySearch::debug() const {
	Print << U"BinarySearch";
}

BinarySearch::BinarySearch(const InitData& init) : IScene(init) {
	Scene::SetBackground(Palette::Cyan);
	debug();
}

BinarySearch::~BinarySearch() {
	ClearPrint();
}

void BinarySearch::update() {

}

void BinarySearch::draw() const {

}
