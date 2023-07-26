#include "player.h"

Player::Player()
{
	QGridLayout* box = new QGridLayout();
	box->addWidget(new QLabel("player"));
	setLayout(box);
}

Player::~Player()
{

}
