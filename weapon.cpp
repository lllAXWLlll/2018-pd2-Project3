#include "weapon.h"

weapon::weapon(QObject *parent) : QObject(parent)
{
}
weapon::weapon(int w){
    weapon_ID = w;
    if(weapon_ID == 0){
        shot_interval = 100;
        gun.append("./picture/AWM.png");
        setScale(0.34);
        setData(0, 30); //bullet speed
        setData(1, 110); //damage
        setData(2, 0);  //deviation
        setData(3, 0.1); //muzzle flash scale
        sound.setMedia(QUrl::fromLocalFile("/home/wesleylin/ShootingGame/sound/Barrett_fire.wav"));
    }
    if(weapon_ID == 1){
        shot_interval = 10;
        gun.append("./picture/AK47.png");
        setScale(0.24);
        setData(0, 20);
        setData(1, 30);
        setData(2, 2);
        setData(3, 0.05);
        sound.setMedia(QUrl::fromLocalFile("/home/wesleylin/ShootingGame/sound/AK47_fire.wav"));
    }
    setPixmap(gun.at(0));
}
