#include "main_window.h"

MainWindow::MainWindow()
{
	m_vbox_main = new QVBoxLayout();

	m_tabw_main = new QTabWidget();
	
	m_storage = new Storage();

	m_tabw_main->addTab(m_storage, tr("Storage"));

	m_vbox_main->addWidget(m_tabw_main);

	setLayout(m_vbox_main);
}

MainWindow::~MainWindow()
{

}
