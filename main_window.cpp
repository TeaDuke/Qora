#include "main_window.h"

MainWindow::MainWindow(QWidget* parent)
	: QWidget(parent)
{
	QGridLayout* box = new QGridLayout();
	box->addWidget(new QLabel("main"));
	setLayout(box);
}

MainWindow::~MainWindow()
{

}
