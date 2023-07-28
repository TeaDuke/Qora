#include "album.h"

Album::Album(QString title, QString author, QImage cover)
{
	m_title = title;
	m_author = author;
	m_cover = cover;

	m_title_label = new QLabel(m_title);
	m_author_label = new QLabel(m_author);
	m_cover_label = new QLabel();
	m_cover_label->setPixmap(QPixmap::fromImage(m_cover));

	QVBoxLayout* layout = new QVBoxLayout();
	layout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
	layout->addWidget(m_cover_label);
	layout->addWidget(m_title_label);
	layout->addWidget(m_author_label);

	setLayout(layout);
}

Album::~Album()
{
}
