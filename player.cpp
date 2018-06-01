#include "player.h"

Player::Player(int h, int character_ID): Human(h){
    character.append("./picture/killer.png");
    setPixmap(character.at(character_ID));
    setScale(0.5);
    setZValue(1);
    w = new weapon(1);
    healthbar = new QGraphicsRectItem;
    healthbar->setBrush(Qt::green);
}
void Player::setItemPos(){
    w->setPos(x()+pixmap().width()*scale()/1.6, y()+pixmap().height()*scale()/1.6-w->pixmap().height()*w->scale());
    healthbar->setRect(x()+pixmap().width()*scale()/2-50, y()-30, health, 5);
    if(health <= 50 && health > 20)
        healthbar->setBrush(Qt::yellow);
    if(health <= 20)
        healthbar->setBrush(Qt::red);
}

