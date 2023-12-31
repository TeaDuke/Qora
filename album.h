#pragma once

#include <QtWidgets>
#include <QtCore>
#include <QtMultimedia>


class Album : public QWidget
{
    Q_OBJECT

public:
    Album(QMediaPlayer* media);
    ~Album();

private:
    QMediaPlayer* m_media;
    QString m_title;
    QString m_author;
    QImage m_cover;
    QLabel* m_title_label;
    QLabel* m_author_label;
    QLabel* m_cover_label;
};
