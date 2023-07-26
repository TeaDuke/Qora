#include "player.h"

Player::Player(QWidget* parent)
	: QWidget(parent)
{
	QGridLayout* box = new QGridLayout();
	box->addWidget(new QLabel("player"));
	setLayout(box);
}

Player::~Player()
{

}
