#include "storage.h"

Storage::Storage() {
	
	m_lbl_storage = new QLabel("test");

	m_vbox_main = new QVBoxLayout();

	m_vbox_main->addWidget(m_lbl_storage);

	setLayout(m_vbox_main);

}

Storage::~Storage() {

}

