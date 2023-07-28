#include "main_window.h"

MainWindow::MainWindow() {
	m_pr_current_index = 0;

	m_vbox_main = new QVBoxLayout();

	m_storage = new Storage();
	m_search = new Search();

	m_tabw_main = new QTabWidget();

	Settings();
	Connections();
}

MainWindow::~MainWindow() {

}

void MainWindow::Settings() {
	m_tabw_main->addTab(m_storage, tr("Storage"));
	m_tabw_main->addTab(m_search, tr("Search"));

	m_tabw_main->setTabVisible(0, false);
	m_tabw_main->setTabVisible(1, false);

	m_tabw_main->setCurrentIndex(0);

	m_vbox_main->addWidget(m_tabw_main);

	setLayout(m_vbox_main);
}

void MainWindow::Connections() {

}

void MainWindow::SetTabWIndex(int index) {
	m_pr_current_index = index;
	m_tabw_main->setCurrentIndex(index);
}