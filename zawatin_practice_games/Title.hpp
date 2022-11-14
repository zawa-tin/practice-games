#pragma once
#include "Base.hpp"

class Title : public App::Scene {
private:
	void debug() const ;
public:

	Title(const InitData& init);

	~Title();

	void update() override;

	void draw() const override;
};
