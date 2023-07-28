#include "search.h"

Search::Search() {
	m_pr_current_index = 0;

	m_btn_tracks = new QPushButton("Tracks");
	m_btn_albums = new QPushButton("Albums");
	m_btn_artists = new QPushButton("Artists");
	m_btn_playlists = new QPushButton("Playlists");

	m_tabw_search = new QTabWidget();

	m_hbox_tabs = new QHBoxLayout();
	m_vbox_main = new QVBoxLayout();

	Settings();
	Connections();

}

Search::~Search() {

}

void Search::Settings() {
	m_hbox_tabs->addWidget(m_btn_tracks);
	m_hbox_tabs->addWidget(m_btn_albums);
	m_hbox_tabs->addWidget(m_btn_artists);
	m_hbox_tabs->addWidget(m_btn_playlists);
	m_hbox_tabs->setAlignment(Qt::AlignLeft | Qt::AlignTop);

	m_tabw_search->setTabBarAutoHide(true);

	m_vbox_main->addLayout(m_hbox_tabs);
	m_vbox_main->addWidget(m_tabw_search);
	m_vbox_main->setAlignment(Qt::AlignLeft | Qt::AlignTop);

	setLayout(m_vbox_main);
}

void Search::Connections() {
	connect(m_btn_tracks, &QPushButton::clicked, this, [this]() { m_pr_current_index = 0; });
	connect(m_btn_albums, &QPushButton::clicked, this, [this]() { m_pr_current_index = 1; });
	connect(m_btn_artists, &QPushButton::clicked, this, [this]() { m_pr_current_index = 2; });
	connect(m_btn_playlists, &QPushButton::clicked, this, [this]() { m_pr_current_index = 3; });
}