/****************************************************************************/
/*!
\file Vec2D.h
\author Lim Guan Hui
\par email: lguanhui14@gmail.com
\brief
Struct to define a vector position
*/
/****************************************************************************/


#ifndef VEC2D_H
#define VEC2D_H

#include <iostream>
/****************************************************************************/
/*!
struct Vec2D:
\brief Defines a vector position and its methods
*/
/****************************************************************************/
struct Vec2D
{
public: 
    double x;
    double y;
    Vec2D();
    Vec2D(double m, double w);
    virtual ~Vec2D();
};

#endif