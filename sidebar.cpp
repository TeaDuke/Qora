#include "sidebar.h"

Sidebar::Sidebar(MainWindow* main_window) {
	m_pr_current_index = 0;

	m_btn_storage = new QPushButton("Main");
	m_btn_search = new QPushButton("Search");

	m_vbox_main = new QVBoxLayout();

	m_main_window = main_window;

	Settings();
	Connections();

}

Sidebar::~Sidebar() {

}

void Sidebar::Settings() {
	m_vbox_main->addWidget(m_btn_storage);
	m_vbox_main->addWidget(m_btn_search);
	m_vbox_main->setAlignment(Qt::AlignLeft | Qt::AlignTop);

	setLayout(m_vbox_main);

}

void Sidebar::Connections() {
	connect(m_btn_storage, &QPushButton::clicked, this, [this]() { m_pr_current_index = 0, m_main_window->SetTabWIndex(0); });
	connect(m_btn_search, &QPushButton::clicked, this, [this]() { m_pr_current_index = 1, m_main_window->SetTabWIndex(1); });
}
