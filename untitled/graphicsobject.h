#ifndef GRAPHICSOBJECT_H
#define GRAPHICSOBJECT_H

#include <QObject>
#include <QVector3D>
#include <QPointF>
#include <../Engine/texture.h>

class GraphicsObject : public QObject,Texture
{
    Q_OBJECT
public:
    explicit GraphicsObject(QObject *parent = 0);
    void setPos(float x,float y,float z);
    void setPos(QVector3D pos);
    QVector3D pos()const;
    void setRotate(float angle);
    float rotate()const;
    void setScale(float width,float height);
    void setScale(QPointF scaled);
    QPointF scale()const;
private:
    int idParent;
    int index;
    QVector3D position;
    float angle;
    QPointF scaled;
};

#endif // GRAPHICSOBJECT_H
