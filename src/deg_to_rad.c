/*
 * E89 Pedagogical & Technical Lab
 * project:     tp cercle
 * created on:  2023-01-12 - 09:56 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: deg to rad
 */

#include <math.h>

double deg_to_rads(int degrees)
{
    double rad;

    rad = (M_PI * 2 * degrees) / 360;
    return rad;
}
