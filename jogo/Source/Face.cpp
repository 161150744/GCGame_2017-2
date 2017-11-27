#include <iostream>
#include <vector>
#include <algorithm>
#include "../Headers/Face.h"
#include "../Headers/Aresta.h"
#include "../Headers/Ponto.h"
#include "../Headers/image.hpp"
#include <GL/glut.h>

using namespace std;

Face::Face(){}
Face::~Face(){}

void Face::glFace(int comTextura, GLuint texture){

    //glBindTexture( GL_TEXTURE_2D, texture);
    glBegin(GL_POLYGON);
        calcula_vetZ();
        glNormal3f(vetX,vetY,vetZ);
        for(int i = 0; i < arestas.size() ; i++){
            /*if(i = 0) glTexCoord2f(0.0, 0.0);
            if(i = 1) glTexCoord2f(0.0, 1.0);
            if(i = 2) glTexCoord2f(1.0, 1.0);
            if(i = 3) glTexCoord2f(1.0, 0.0);*/
            arestas[i].glAresta();
        }
    glEnd();
        
}

void Face::addAresta(Aresta aresta){
    arestas.push_back(aresta);
}

void Face::calcula_vetZ()
{
    arestas[0].calcula_vetDir();
    arestas[1].calcula_vetDir();
    Ponto vet1 = arestas[0].getvetDir();
    Ponto vet2 = arestas[1].getvetDir();
    this->vetZ = (vet1.getX() * vet2.getY()) - (vet1.getY() * vet2.getX());
    this->vetY = (vet1.getX() * vet2.getZ()) - (vet1.getZ() * vet2.getX());
    this->vetX = (vet1.getY() * vet2.getZ()) - (vet1.getZ() * vet2.getY());
}
float Face::getvetZ()
{
    return this->vetZ;
}
