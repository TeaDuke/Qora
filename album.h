#pragma once

#include <QtWidgets>
#include <QtCore>


class Album : public QWidget
{
    Q_OBJECT

public:
    Album(QString title, QString author, QImage cover);
    ~Album();

private:
    QString m_title;
    QString m_author;
    QImage m_cover;
    QLabel* m_title_label;
    QLabel* m_author_label;
    QLabel* m_cover_label;
};
