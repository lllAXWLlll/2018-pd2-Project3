#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include <QTimer>
#include "bullet.h"
#include <QDebug>
#include "player.h"
#include "weapon.h"
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void player_action();
    void shoot();
    void check_health();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    player *p, *e;
    weapon *w;
    static bool up, down, left, right, s;
    int shot_interval;
    QTimer *timer;
};

#endif // MAINWINDOW_H
