#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>
#include <weapon.h>

class player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit player(QObject *parent = nullptr);
    player(int character_ID);
    void damaged(int damage);
    int health, timeInterval;
    void move(int tx, int ty);
    void setItemPos();
    weapon *w;
    QGraphicsRectItem *healthbar;
private:
    QVector<QString> character;

};

#endif // PLAYER_H
