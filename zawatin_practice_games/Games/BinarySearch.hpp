#pragma once
#include "../Base.hpp"

class BinarySearch : public App::Scene {
private:

	void debug() const;

public:

	BinarySearch(const InitData& init);

	~BinarySearch();

	void update() override;

	void draw() const override;
};
