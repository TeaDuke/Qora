#include "sidebar.h"

Sidebar::Sidebar(QWidget* parent)
	: QWidget(parent)
{
	QGridLayout* box = new QGridLayout();
	for(int i=0;i<10;i++)
		box->addWidget(new QLabel("sidebar"), i, 0);
	setLayout(box);
}

Sidebar::~Sidebar()
{

}
