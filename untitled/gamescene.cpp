#include "gamescene.h"

GameScene::GameScene(QWidget *parent) :QGLWidget(parent)
{
}

GameScene::~GameScene()
{}

void GameScene::initializeGL()
{
    this->initializeOpenGLFunctions();
    this->img.load("D:/Constantine/Eisr7.png");
    this->shader.load("://res/Vertex.vsh","://res/Frag.fsh");
    this->shader.createVAO("Vertex","Texture");
}

void GameScene::resizeGL(int width, int height)
{
    this->glViewport(0,0,width,height);
}

void GameScene::paintGL()
{
    mat_tex.setToIdentity();
    mat_pos.setToIdentity();
    mat_p.setToIdentity();
    mat_pos.translate(0,0,0);
    mat_pos.scale(500,500);
    mat_p.ortho(0,800,0,600,-1,1);

    this->glClearColor(1,0,0,1);
    this->glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    this->shader.bind();
    this->shader.vertexArrayObject()->bind();
    this->img.bind();
    this->shader.setUniformValue("MatrixTex", mat_tex);
    this->shader.setUniformValue("MatrixPos",mat_p*mat_pos);
    this->glDrawArrays(GL_TRIANGLES, 0, 6);
    this->shader.vertexArrayObject()->release();
    this->img.unbind();
    this->shader.release();
}
