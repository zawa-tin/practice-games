#pragma once
#include "Base.hpp"

class Title : public App::Scene {
private:
	void debug() const ;
public:

	Title(const InitData& init);

	void update() override;

	void draw() const override;
};
