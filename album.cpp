#include "album.h"

Album::Album(QMediaPlayer* media)
{
	m_media = media;

	QMediaMetaData meta = m_media->metaData();

	QVariant author = meta.value(QMediaMetaData::Author);
	QVariant title = meta.value(QMediaMetaData::Title);
	QVariant cover = meta.value(QMediaMetaData::CoverArtImage);
	m_title = qvariant_cast<QString>(title);
	m_author = qvariant_cast<QString>(author);
	m_cover = qvariant_cast<QImage>(cover);

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
