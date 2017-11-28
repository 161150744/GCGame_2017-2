#ifndef CUBO_H
#define CUBO_H

#include "GL/glut.h"
#include "Player.hpp"
#include "Bala.hpp"

class Cubo
{
    private:
        GLuint texture[3];
        float x;
        float y;
        float z;
        float lado; // LARGURA / ALTURA / PROFUNDIDADE
        bool vida;
        float r;
        float g;
        float b;
        float alpha;

    public:
        Cubo();
        Cubo(float x, float y, float z, float lado);
        ~Cubo();
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
        //
        void setR(float r);
        void setG(float g);
        void setB(float b);
        void setAlpha(float alpha);
        void setColor(float r, float b, float g, float alpha);
        float getR();
        float getG();
        float getB();
        float getAlpha();
};

#endif
