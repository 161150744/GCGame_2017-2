#ifndef CUBO_H
#define CUBO_H

#include "GL/glut.h"

class Cubo()
{
    private:
        GLuint texture[3];
        float x;
        float y;
        float z;
        float lado; // LARGURA / ALTURA / PROFUNDIDADE
        bool vida;

    public:
        Cubo();
        Cubo(float x, float y, float z, float lado);
        float getX();
        float getY();
        float getZ();
        float getLado();
        bool getVida();
        void setX( float x);
        void setY( float y);
        void setZ( float z);
        void setLado(float lado);
        void setVida(bool vida);
        void MoveInimigo();
        bool IntervaloX(float x);
        bool IntervaloY(float y);
        void Colisao(Bala *bala);
};
