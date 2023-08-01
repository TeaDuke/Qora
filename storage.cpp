#include "storage.h"

Storage::Storage() {
	m_pr_current_index = 0;

	m_btn_albums = new QPushButton("Albums");
	m_btn_artists = new QPushButton("Artists");
	m_btn_playlists = new QPushButton("Playlists");

	m_tabw_storage = new QTabWidget();

	m_hbox_tabs = new QHBoxLayout();
	m_vbox_main = new QVBoxLayout();

	Settings();
	Connections();

}

Storage::~Storage() {

}

void Storage::Settings() {

	m_hbox_tabs->addWidget(m_btn_albums);
	m_hbox_tabs->addWidget(m_btn_artists);
	m_hbox_tabs->addWidget(m_btn_playlists);
	m_hbox_tabs->setAlignment(Qt::AlignLeft | Qt::AlignTop);


	m_tabw_storage->setTabBarAutoHide(true);

	m_vbox_main->addLayout(m_hbox_tabs);
	m_vbox_main->addWidget(m_tabw_storage);
	m_vbox_main->setAlignment(Qt::AlignLeft | Qt::AlignTop);

	setLayout(m_vbox_main);
}

void Storage::Connections() {
	connect(m_btn_albums, &QPushButton::clicked, this, [this]() { m_pr_current_index = 0; });
	connect(m_btn_artists, &QPushButton::clicked, this, [this]() { m_pr_current_index = 1; });
	connect(m_btn_playlists, &QPushButton::clicked, this, [this]() { m_pr_current_index = 2; });
}