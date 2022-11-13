// 3C_Engine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ConsoleGameEngine.h"

struct vec3d
{
    float x, y, z;
};

struct triangle
{
    vec3d p[3];
};

struct mesh
{
    vector<triangle> tris;
};



class Engine3D : public olcConsoleGameEngine
{
public:
    int olcEngine3D()
    {
        m_sAppName = L"3D Demo";
    }
private:
    mesh meshCube;
public:
    bool OnUserCreate() override
    {
        meshCube.tris = {
        
            //SOUTH
            {0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f,  1.0f, 1.0f, 0.0f},
            {0.0f, 0.0f, 0.0f,  1.0f, 0.0f, 0.0f,  1.0f, 0.0f, 0.0f},

            //EAST
            {1.0f, 0.0f, 0.0f,  1.0f, 1.0f, 0.0f,  1.0f, 1.0f, 1.0f},
            {1.0f, 0.0f, 0.0f,  1.0f, 1.0f, 1.0f,  1.0f, 0.0f, 1.0f},

            //NORTH
            {1.0f, 0.0f, 1.0f,  1.0f, 1.0f, 1.0f,  0.0f, 1.0f, 1.0f},
            {1.0f, 0.0f, 1.0f,  0.0f, 1.0f, 1.0f,  0.0f, 0.0f, 1.0f},

            //WEST
            {0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 1.0f,  0.0f, 1.0f, 0.0f},
            {0.0f, 0.0f, 0.0f,  0.0f, 1.0f, 0.0f,  0.0f, 0.0f, 0.0f},

            //TOP
            {0.0f, 1.0f, 1.0f,  0.0f, 1.0f, 1.0f,  1.0f, 1.0f, 1.0f},
            {0.0f, 1.0f, 1.0f,  1.0f, 1.0f, 1.0f,  1.0f, 1.0f, 0.0f},

            //BOTTOM
            {1.0f, 0.0f, 1.0f,  0.0f, 0.0f, 1.0f,  0.0f, 0.0f, 0.0f},
            {1.0f, 0.0f, 1.0f,  0.0f, 0.0f, 0.0f,  1.0f, 0.0f, 0.0f},

        };

        return true;
    }
    bool OnUserUpdate(float fElapsedTime) override
    {
        return true;
    }
};


int main()
{
    Engine3D demo;
    if (demo.ConstructConsole(256, 240, 4, 4));
        demo.Start();
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
