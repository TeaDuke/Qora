#include "sidebar.h"

Sidebar::Sidebar(QWidget* parent)
	: QWidget(parent)
{
	QGridLayout* box = new QGridLayout();
	box->addWidget(new QLabel("sidebar"));
	setLayout(box);
}

Sidebar::~Sidebar()
{

}
