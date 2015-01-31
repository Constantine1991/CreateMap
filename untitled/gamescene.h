#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QtWidgets>
#include <QGLWidget>
#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include "graphicsobject.h"
#include "../Engine/shader.h"

class GameScene : public QGLWidget,QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit GameScene(QWidget *parent = 0);
    ~GameScene();
protected:
    //void event(QEvent *event);
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    Texture img;
    Shader shader;
    QMatrix4x4 mat_pos;
    QMatrix4x4 mat_p;
    QMatrix4x4 mat_tex;
};

#endif // GAMESCENE_H
